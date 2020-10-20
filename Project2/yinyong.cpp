#include <iostream>
#include <string>


int& getValue() {

	static int a = 234;

	return a;
}


int func(int a, int b =10, int c =10){

	return a + b + c;
}
int func2(int a = 10, int b = 20);

int func2(int a, int b){
	return a + b;
}

using namespace std;

int main12() {

	//int& b = getValue();
	//std::cout << b << std::endl;

	//getValue() = 49;
	//std::cout << b << std::endl;

	//b = 22;
	//std::cout << b << std::endl;

	//int c = 3;
	//int& d = c;

	//c = 30;
	//d = 33;
	//std::cout << d << std::endl;
	//std::cout << c << std::endl;


	//std::cout << func(2) << std::endl;
	//std::cout << func2() << std::endl;

	int a = 30;
	int b = 40;
	//const int* p = &a;
	//cout << &a << endl;
	//cout << p << endl;
	//cout << *p << endl;
	//p = &b;
	//cout << &b << endl;
	//cout << p << endl;
	//cout << *p << endl;

	int* const p = &a;
	cout << *p << endl;
	*p = b;

	cout << p << endl;
	cout << *p << endl;











	return 0;

}

class Phone {

public :
	Phone(string name) {
		phoneName = name;
		cout << "Phone 构造" << endl;
	}

	string phoneName;
};

class Poeple {

	static int m_age;

public :
	Poeple(string nam, string phone_name):name(nam), pho(phone_name) {
		cout << "People 构造" << endl;
	}
	string name;
	Phone pho;

	void printInof() {
		
		cout << "People = " << name << "\nphone = " << pho.phoneName << endl;
	
	}
};


class People {

public :
	static int m_age;

	People() {
	
		cout << "People  = " << m_age << endl;

	}

};

int People::m_age = 30;




class Person1 {

public :
	Person1() {
		m_A = 0;
		m_B = 0;
	}
	void showInfo() const{
		
		//m_A = 30;
		m_B = 20;
		this->m_B = 23;
		this->m_B = 3;
	}

	int m_A;
	mutable int m_B;


};

int main14() {


	//Poeple pp = Poeple("张三", "三星Note7");
	//pp.printInof();

	/*People pp;
	pp.m_age = 20;

	cout << "people changed =" << pp.m_age << endl;
	People p2;
	p2.m_age = 44;
	cout << "p2 = " << People::m_age << endl;*/



	return 0;
}




