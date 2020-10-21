#include <iostream>
#include <string>
//#include "myArrays.cpp"
//#include "conntect.cpp"
#include <fstream>


using namespace std;

class Person12 {
public :
	int age;
	string name;
	int id;
};

int maintest() {

	//MyArray<Person> mya(5);

	//Person p1 = {1,"臧三1"};
	//Person p2 = {2,"臧三2"};
	//Person p3 = {3,"臧三3"};
	//Person p4 = {4,"臧三4"};
	//Person p5 = {5,"臧三5"};
	//Person p6 = {6,"臧三6"};
	//Person p7 = {7,"臧三7"};
	/*mya.add(p1);
	mya.add(p2);
	mya.add(p3);
	mya.add(p4);
	mya.add(p5);
	mya.add(p6);
	mya.add(p7);*/


	//mya.addP(p1);
	//mya.addP(p2);
	//mya.addP(p3);
	//mya.addP(p4);
	//mya.addP(p5);
	//mya.addP(p6);
	//mya.addP(p7);


	//mya.printArray();
	
	//cout << "容量：" << mya.getCapcity() << endl;
	//cout << "总数：" << mya.getNum() << endl;

	//mya.remove();
	//cout << mya[6].age << endl;
	//cout << mya[6].name << endl;

	//MyArray<Person> myaa(20);
	//myaa = mya;
	//myaa.printArray();
	
	//Connecter* conn = new Connecter [1000];

	//string name;
	//string sex;
	//int *age = new int(10);
	//string tel;
	//string address;
	//int size;
	//int capacity;
	//cin >> name;



	//conn[0].setParam(name, sex, age, tel, address);
	//conn[0].printConn();

	
	//int* arr = new int[7];
	//arr[0] = 241;
	//arr[1] = 2;
	//arr[2] = 3;
	//arr[3] = 4;
	//arr[4] = 5;
	//arr[5] = 6;
	//arr[6] = 7;
	//cout << arr << endl;



	//cout << "" << endl;


	Person12 person;
	person.age = 30;
	person.name="张三啊张三";
	person.id = 32;

	//Person *person = new Person();
	//person->name = "张三那啊 张三";
	//person->age = 30;


	ofstream ofs;
	ofs.open("F:/write.txt");
	
	ofs << person.name << " "
		<< person.age  << " "
		<< person.id   << endl;

	//ofs.write((const char*) &person, sizeof(Person12));

	ofs.close();

	ifstream ifs;
	ifs.open("f:/write.txt");
	//char name[1024] = {0};
	int age;
	int id;
	string name;

	ifs >> name;
	ifs >> age;
	ifs >> id;

	cout << name << endl;
	cout << age << endl;
	cout << id << endl;
	ifs.close();
	


	return 0;
}