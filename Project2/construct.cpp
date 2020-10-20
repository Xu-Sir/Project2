#include <iostream>
#include <string>
using namespace std;


class student {

public :
	string name;
	int age;
	string sex;
	student() {
		cout << "struct method" << endl;
	}
	~student() {
		cout << "xigou hanshu " << endl;
		//free(age);                            
	}

	

	void getMessage() {
		cout << "name  age  sex :" << name << age << sex << endl;
	}
	void setMessage(string name1, int age1, string sex1){
	
		name = name1;
		age = age1;
		sex = sex1;
	}

};

class idCard {

public :
	idCard() {
		cout << "constuct has been called构造函数调用" << endl;
	}
	~idCard() {
		cout << "xigou hanshu idCard.... 析构函数调用" << endl;
	}
	idCard(string ss) {
		cout << "youcan gouzao hanshu有参构造函数：" << ss << endl;
	
	}
	idCard(int a) {
		cout << "int gouzao hanshu :int构造函数" << a << endl;
	}

};


class Test01 {

public:
	Test01(const Test01 & t) {
		age = t.age;
	}
	int age;
};

int main11()
{
	/*student stu;
	stu.setMessage("zhangsan", 20, "man");
	stu.getMessage();
	stu.~student();
	stu.~student();
	stu.~student();
	stu.~student();
	stu.~student();
	stu.~student();
	cout << stu.age << endl;*/


	//student stu2;
	//stu2.getMessage();
	//stu2.~student();
	//stu2.age;

	//idCard c;
	//idCard c1 = idCard("显示调用");
	//idCard("匿名调用");
	//idCard c2 = 40;
	//int a = 0;
	//int b = 2;
	//const int* p = &a;
	//p = &b;
	//int* const q = &a;
	//*q = 9;
	//*p = 3;

	//Test01 test;






	return 0;
}