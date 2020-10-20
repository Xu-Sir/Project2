#include <iostream>

using namespace std;

template <class T>
class MyArray {

public:
	//int initSize;
	//char arr[capcity];
	MyArray() {//无参构造
		this->num = 0;
		this->capcity = 16;
		this->arr = new T[this->capcity];
	}
	MyArray(int size) {//有参构造

		//MyArray();
		this->capcity = size;
		this->num = 0;
		this->arr = new T[this->capcity];

	}
	MyArray(MyArray &my) {//拷贝函数
		this->capcity = my.capcity;
		this->num = my.num;
		this->arr = new T[my.capcity];
		for (int i = 0; i < my.capcity; i++) {
			this->arr[i] = my.arr[i];
		}
	}
	void add(T cla) {

		if (num == capcity) { //扩容
			T* temp;
			this->capcity = capcity << 1;
			temp = arr;
			arr = new T[this->capcity];
			for (int i = 0; i < num; i++) {
				this->arr[i] = temp[i];
			}
			//delete temp;
			temp = NULL;
		}
		arr[num] = cla;
		num++;
	}
	void addP(T &cla) {

		if (num == capcity) { //扩容
			T* temp;
			this->capcity = capcity << 1;
			temp = arr;
			arr = new T[this->capcity];
			for (int i = 0; i < num; i++) {
				this->arr[i] = temp[i];
			}
			//delete temp;
			temp = NULL;
		}
		arr[num] = cla;
		num++;
	}
	void remove(){

		if (this->num != 0){
			//this->arr[num] = new T;
			this->num--;
		}
		
	}

	MyArray& operator=(const MyArray& myarr) {
		
		if (this->arr != NULL){
			delete[] this->arr;
			this->capcity = 0;
			this->num = 0;
		}
		this->capcity = myarr.capcity;
		this->num = myarr.num;
		this->arr = new T[this ->capcity];
		for (int i = 0; i < this->num; i++) {
			this->arr[i] = myarr[i];
		}
		return *this;
	}

	T operator[](int index) {
		return arr[index];
	}

	void printArray() {

		for (int i = 0; i < capcity; i++) {
			//cout << &arr[i] << endl;
			cout << arr[i].age << endl;
			cout << arr[i].name << endl;
		}
	}
	int getNum() {
		return num;
	}

	int getCapcity() {
		return capcity;
	}

	~MyArray() {
		/*if (this->arr != NULL) {
			delete[] this->arr;
			this->arr = NULL;
			this->capcity = 0;
			this->num = 0;
		}*/
	}

private:
	int num;//元素个数
	int capcity;//容量
	T* arr;//数组

};

