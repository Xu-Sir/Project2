#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>

char* rev_str(char* dest,  char* src)
{
	if (src == NULL)
	{
		return NULL;
	}

	char* pHead = dest;
	char *pTail = src + strlen(src) -1;

	while (*pHead++ = *pTail--, pTail > src) {
		//printf("")
	}
	return dest;
}

using namespace std;


class Person
{
public :
	void showClassName() {
		cout << "person Class" << endl;
	}

	void showPerson() {
		/*if (this == NULL){
			return;
		}*/
		mAge = 3;
		cout << mAge << endl;
	}

public :
	int mAge;
};


void test01() {
	Person* p = NULL;
	p->showClassName();
	p->showPerson();

}



int main7()
{
	//char src[] = "eeddccbbaa";
	//char dest[1024] = { 0 };

	//rev_str(dest, src);

	//printf("%s \n", dest);

	//test01();

	//int a = 40;
	//int b = 430;
	//const int* p = &a;//≥£¡ø÷∏’Î 
	//p = &b;


	//vector<int> vec;
	//cout << "init size of " << vec.size() << endl;
	//for (int i = 0; i < 10; i++) {
	//	vec.push_back(i);
	//};
	//cout << "pushback first size " << vec.size() << endl;


	//for (int i = 0; i < 7; i++) {
	//
	//	vec.push_back(i);
	//}
	//cout << "pushback secend size " << vec.size() << endl;
	//vector<int> ::iterator ve = vec.begin();
	//while (ve != vec.end()) {

	//	cout << *ve << endl;
	//	ve++;
	//}

	int a[10] = { 0 };

	for (int i = 0; i < 5; i++) {
		a[i] = i;
	}

	cout << sizeof(a) << endl;

	cout << sizeof(a)/sizeof(int) << endl;












	return 0;
}
