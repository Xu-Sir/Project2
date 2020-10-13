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

int main2() {

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