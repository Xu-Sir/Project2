#include <iostream>
#include <string>
using namespace std;



class Connecter {
private:
	string name;
	string sex;
	int age;
	string tel;
	string address;
	int size;
	int capacity;

public:
	bool setParam(string names, string sexs, int ages, string tele, string addres) {

		if (this->size == capacity){
			return false;
		}

		this->name = names;

		this->sex = sexs;

		this->age = ages;

		this->tel = tele;

		this->address = addres;


		this->size++;
		return true;
	}

	bool remove()
	{
		if(this->size != 0){
			this->size--;
			return true;
		}
		return false;
	}


	Connecter()
	{
		this->size = 0;
		this->capacity = 5;
	}

	void printConn() {

		cout << "������" << this->name << endl;
		cout << "�Ա�" << this->sex << endl;
		cout << "���䣺" << this->age << endl;
		cout << "�绰��" << this->tel << endl;
		cout << "��ַ��" << this->address << endl;

	}
};


