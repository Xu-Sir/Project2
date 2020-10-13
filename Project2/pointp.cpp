#include <stdio.h>
#include <string.h>
#include <iostream>


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



int main()
{
	//char src[] = "eeddccbbaa";
	//char dest[1024] = { 0 };

	//rev_str(dest, src);

	//printf("%s \n", dest);

	test01();

	int a = 40;
	int b = 430;
	const int* p = &a;//≥£¡ø÷∏’Î 
	p = &b;









	return 0;
}
