#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Person {

public:
	int age;
	char name[20];


};


class Article {

public :
	int no;
	char title[20];
	char subject[100];
	int page;
	char author[30];


	int operator()(int a, int b) {

		return a + b;
	}
};




int main33() {

	//Article art = { 1120, "����ѧϰLUNUX�Ŷ���", "����취1: ��cfd����Ϊ������: fcntl �����ж���ͻ�����������, cfdֻ�ᱣ�����һ���ļ���������ֵ", 30, "����" };

	//ofstream ofs;
	//ofs.open("f:/article");
	//if (!ofs.is_open()){
	//	cout << "�ļ���ʧ��" << endl;
	//}
	//ofs.write((const char *)&art, sizeof(art));
	//ofs.close();


	//Article arti;
	//ifstream ifs;
	//ifs.open("f:/article");
	//if (!ifs.is_open()) {
	//	cout << "�ļ��򿪳���" << endl;
	//}
	//ifs.read((char *) &arti, sizeof(Article));
	//cout << arti.author << endl;
	//cout << arti.no << endl;
	//cout << arti.page << endl;
	//cout << arti.subject << endl;
	//cout << arti.title << endl;


	//ofstream ofs;
	//ofs.open("F://write.txt");
	//ofs << "��д������ʶ������ ";
	//ofs.close();

	//ifstream ifs;

	//ifs.open("F://write.txt", ios::in);
	//cout << ifs.is_open() << endl;


	//��������
	//char buf[1024] = { 0 };
	//while (ifs >> buf) {
	//	cout << buf << endl;
	//}

	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf))) {
	//	cout << buf << endl;
	//}

	//string buf;
	//while (getline(ifs, buf)){
	//	cout << buf << endl;
	//}

	//char c;
	//while((c = ifs.get()) != EOF){
	//
	//	cout << c;
	//}
	//ifs.close();


	//Person per = { 38, "����" };


	//ofstream ofs;
	//ofs.open("F://write.txt");
	//if (!ofs.is_open()){
	//	cout << "д��  ���ļ�ʧ��" << endl;
	//}
	//ofs.write((const char *) &per, sizeof(Person));
	//ofs.close();

	//ifstream ifs;

	//ifs.open("F:/write.txt");
	//if (!ifs.is_open()){
	//	cout << "���ļ�ʧ��" << endl;
	//}

	//Person pers;

	//ifs.read( (char *)&pers, sizeof(pers));
	//cout << pers.age << endl;
	//cout << pers.name << endl;
	//char chp[] = pers.name;
	//cout << memset(pers.name, 0X00, sizeof(pers.name)) << endl;
	

	Article art;
	cout << art(10, 30) << endl;


	return 0;
}