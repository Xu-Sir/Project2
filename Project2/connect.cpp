#include <iostream>
#include <string>
using namespace std;

void showMenu() {

	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;

}

struct Person {

	string name;
	int sex;
	int age;
	string phone;
	string address;

};

#define MAX 1000

struct AddressBooks {

	struct Person personArray[MAX];
	int size;
};


bool checkPerson(AddressBooks* abs)
{

	if (abs->size == 0)
	{
		cout << "û����ϵ�� �յ�" << endl;
		return false;
	}
	return true;
}




bool configPerson(AddressBooks* abs, int index)
{
	
	string name;

	cout << "������" << endl;
	cin >> name;
	abs->personArray[index].name = name;

	int sex = 0;
	cout << "�Ա�" << endl;
	cout << "1 ��" << endl;
	cout << "2 Ů" << endl;

	while (true) {

		cin >> sex;
		if (sex == 1 || sex == 2) {
			abs->personArray[index].sex = sex;
			break;
		}
		else {
			cout << "��������  ����������" << endl;
		}

	}

	cout << "���䣺" << endl;

	int age = 0;
	while (true) {

		cin >> age;
		if (age > 0 && age < 150) {
			abs->personArray[index].age = age;
			break;
		}
		else
		{
			cout << "����������Ĳ��Ϸ� �����ðɡ�" << endl;
		}
	}

	cout << "�绰��" << endl;

	string telep;
	cin >> telep;
	abs->personArray[index].phone = telep;

	cout << "��ַ��" << endl;
	string add;
	cin >> add;
	abs->personArray[index].address = add;

	return true;

}

void addPerson(AddressBooks *abs)
{
	if (abs->size == MAX){
		cout << "����" << endl;
		return;
	}
	bool succ = configPerson(abs, abs->size);
	if (!succ){
		cout << "���������" << endl;
		return;
	}
	abs->size++;
	cout << "��ӳɹ���" << endl;

	system("pause");
	system("cls");

}

void showBook(AddressBooks* abs) {

	bool che = checkPerson(abs);
	if (!che) 
	{
		return;
	}
	for (int i = 0; i < abs->size; i++) {
		cout << abs->personArray[i].name << endl;
		cout << abs->personArray[i].age << endl;
		cout << (abs->personArray[i].sex == 1? "��":"Ů") << endl;
		cout << abs->personArray[i].phone << endl;
		cout << abs->personArray[i].address << endl;
	}
	system("pause");
	system("cls");

}





int isExist(AddressBooks *abs) {
	
	string delName;
	cin >> delName;
	for (int i = 0; i < abs->size; i++) {
		if (abs->personArray[i].name == delName) {
			return i;
		}
	}
	return -1;
}

void deleteBook(AddressBooks *abs) {

	bool che = checkPerson(abs);
	if (!che)
	{
		return;
	}
	cout << "ɾ����������" << endl;
	

	int index = isExist(abs);
	if (index == -1){
		cout << "��ϵ�˲�����" << endl;
		return;
	}
	for (int i = index; i < abs->size; i++) {
		//if (abs->personArray[i].name == delName) {
			abs->personArray[i] = abs->personArray[i+1];
		//}
	}
	cout << "ɾ���ɹ�" << endl;
	abs->size--;
	system("pause");
	system("cls");

}

void findPerson(AddressBooks* abs) {
	bool che = checkPerson(abs);
	if (!che)
	{
		return;
	}
	cout << "������" << endl;
	int index;
	if ((index = isExist(abs)) == -1)
	{
		cout << "���޴���" << endl;
		return;
	}
	else
	{
		cout << abs->personArray[index].name << endl;
		cout << abs->personArray[index].age << endl;
		cout << (abs->personArray[index].sex == 1 ? "��" : "Ů") << endl;
		cout << abs->personArray[index].phone << endl;
		cout << abs->personArray[index].address << endl;

	}

}
void editPerson(AddressBooks* abs)
{

	bool che = checkPerson(abs);
	if (!che)
	{
		return;
	}
	cout << "������" << endl;
	int index;
	if ((index = isExist(abs)) == -1)
	{
		cout << "��Ա������" << endl;
		return;
	}
	bool succ = configPerson(abs, index);
	if (!succ)
	{
		cout << "������" << endl;
	}
	cout << "�޸ĳɹ�" << endl;
	
	system("pause");

	system("cls");
}


void emptyBooks(AddressBooks *abs) {
	bool che = checkPerson(abs);
	if (!che)
	{
		return;
	}
	abs->size = 0;
	cout << "�����ɹ�" << endl;
	system("pause");
	system("cls");
}
int main() {

	AddressBooks *abs = new AddressBooks();
	abs->size = 0;


	





	int sele = 0;

	while(true){
	
		showMenu();

		cin >> sele;


		switch (sele)
		{
		case 1:
			addPerson(abs);
			break;
		case 2:
			showBook(abs);
			break;
		case 3:
			deleteBook(abs);
			break;
		case 4:
			findPerson(abs);
			break;
		case 5:
			editPerson(abs);
			break;
		case 6:
			emptyBooks(abs);
			break;
		case 0:
			cout << "bye bye !" << endl;
			return 0;
			break;
		default:
			cout << "���벻��ȷ ����������" << endl;
			break;
		}
	

	}



	return 0;

}