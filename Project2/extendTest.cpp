#include <iostream>
#include <string>


using namespace std;

//创建一个计算器  加减乘除 

//传统方式
class CalculateT {

public :
	int num_a;
	int num_b;

	double calcuting(double a, int b, string code) {
	
		if (code == "+") {
			return a + b;
		}else if (code == "-"){
			return a - b;
		}else
		if (code == "*") {
			return a * b;
		}else if (code == "/"){
			if (b == 0){
				throw "divition by zero is illegal !";
			}
			return a / b;
		}
	}

};



class AbstractCalcute {

public :
	double num_A = 0.0;
	double num_B = 0.0;
	virtual	double calcute() = 0;


};

class addCalcute :public AbstractCalcute {

public :
	addCalcute() {
		cout << "addCalcute构造无参" << endl;
	}
	addCalcute(double a, double b){
		num_A = a;
		num_B = b;
		cout << "有参构造" << endl;
	}
	double calcute() {

		return num_A + num_B;
	}

	~addCalcute() {
		cout << "析构调用" << endl;
	}
};


int main17() {
	/*CalculateT cal;
	double b = 0.00;
	try{
		b = cal.calcuting(2, 0, "/");
	}
	catch (const char * e) {
	
		cout << "yichang xinxi "<<  e << endl;
	}

	cout << b << endl;*/


	addCalcute add = addCalcute( 30, 30);
	cout << add.calcute() << endl;

	addCalcute *add1 = new addCalcute;
	add1->num_A = 39;
	add1->num_B = 34;
	cout << add1->calcute() << endl;
	delete add1;

	addCalcute *add2 = new addCalcute(20, 55);
	cout << add2->calcute() << endl;
	delete add2;

	return 0;
}