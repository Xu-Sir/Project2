#include <iostream>
#include <string>
using namespace std;

void showMenu() {

	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
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
		cout << "没有联系人 空的" << endl;
		return false;
	}
	return true;
}




bool configPerson(AddressBooks* abs, int index)
{
	
	string name;

	cout << "姓名：" << endl;
	cin >> name;
	abs->personArray[index].name = name;

	int sex = 0;
	cout << "性别：" << endl;
	cout << "1 男" << endl;
	cout << "2 女" << endl;

	while (true) {

		cin >> sex;
		if (sex == 1 || sex == 2) {
			abs->personArray[index].sex = sex;
			break;
		}
		else {
			cout << "输入有误  请重新输入" << endl;
		}

	}

	cout << "年龄：" << endl;

	int age = 0;
	while (true) {

		cin >> age;
		if (age > 0 && age < 150) {
			abs->personArray[index].age = age;
			break;
		}
		else
		{
			cout << "你年龄输入的不合法 你晓得吧。" << endl;
		}
	}

	cout << "电话：" << endl;

	string telep;
	cin >> telep;
	abs->personArray[index].phone = telep;

	cout << "地址：" << endl;
	string add;
	cin >> add;
	abs->personArray[index].address = add;

	return true;

}

void addPerson(AddressBooks *abs)
{
	if (abs->size == MAX){
		cout << "满了" << endl;
		return;
	}
	bool succ = configPerson(abs, abs->size);
	if (!succ){
		cout << "保存出错了" << endl;
		return;
	}
	abs->size++;
	cout << "添加成功了" << endl;

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
		cout << (abs->personArray[i].sex == 1? "男":"女") << endl;
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
	cout << "删除的姓名：" << endl;
	

	int index = isExist(abs);
	if (index == -1){
		cout << "联系人不存在" << endl;
		return;
	}
	for (int i = index; i < abs->size; i++) {
		//if (abs->personArray[i].name == delName) {
			abs->personArray[i] = abs->personArray[i+1];
		//}
	}
	cout << "删除成功" << endl;
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
	cout << "姓名：" << endl;
	int index;
	if ((index = isExist(abs)) == -1)
	{
		cout << "查无此人" << endl;
		return;
	}
	else
	{
		cout << abs->personArray[index].name << endl;
		cout << abs->personArray[index].age << endl;
		cout << (abs->personArray[index].sex == 1 ? "男" : "女") << endl;
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
	cout << "姓名：" << endl;
	int index;
	if ((index = isExist(abs)) == -1)
	{
		cout << "人员不存在" << endl;
		return;
	}
	bool succ = configPerson(abs, index);
	if (!succ)
	{
		cout << "出错了" << endl;
	}
	cout << "修改成功" << endl;
	
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
	cout << "操作成功" << endl;
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
			cout << "输入不正确 请重新输入" << endl;
			break;
		}
	

	}



	return 0;

}