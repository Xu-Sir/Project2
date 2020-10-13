#include <iostream>
//#include <stdio.h>

using namespace std;

namespace myspace {
	void func() {
	
		cout << "我的空间第一个方法" << endl;
	}

}
namespace mySecSpace {

	void func() {

		cout << "我的第二个空间啊" << endl;
	}
}

using namespace myspace;



int main1() {

	//mySecSpace::func();

	//myspace::func();
	//mySecSpace::func();


	//char name[] = "zhangsan";
	//char lastnam[5] = { 'z','h','a', 'n', 'g' };
	//char lastname[5] = {0};

	//string name = "zhang";
	//for (int i = 0; i < 5; i++) 
	//{
	//	lastname[i] = name[i];
	//
	//}
	//lastnam[5] = 0;

	//cout << &name << endl;
	//cout << &lastnam << endl;
	//char* p;
	//p = lastnam;
	//cout << p << endl;
	//cout << p++ << endl;



	//printf("%p \n", name);
	//printf("%p \n", p);

	//cout << strlen(name) << endl;

	//cout << name[strlen(name) - 1] << endl;

	//cout << strlen(lastnam) << endl;
	//char* pEnd = lastnam + sizeof(lastnam) -1;
	//printf("%d\n", strlen(lastnam));

	//cout << pEnd << endl;
	/*for (int i = 0; i < 5; i++)
	{
		printf("值为：%c\n", *p);
		printf("lastname 的指针为 : %p\n", p++);
		
	}*/


	//cout << sizeof(lastnam)	<< endl;

	//printf("%p\n", pEnd);
	//printf("%c", *pEnd--);


	char name[] = "abcdefgh";
	char cname[1024] = { 0 };
	//char age[5] = {0 };
	//age[0] = 'a';
	//age[1] = 'b';
	//age[2] = 'c';
	//age[3] = 'd';
	//char sex[5] = { '1', '2', '3' };
	//cout << name << endl;

	char * pfirst, * pend;

	//pfirst = name;
	//cout << pfirst << endl;
	//cout << strlen(name) << endl;
	//cout << strlen(age) << endl;
	//cout << strlen(sex) << endl;
	//pend = name + sizeof(name) - 2;
	pend = name + strlen(name) - 1;
	
	//printf(" %c\n", *pend);
	//printf(" %c\n", *--pend);
	//*pfirst = *pend;
	//*++pfirst = *--pend;
	//*++pfirst = *--pend;
	//*++pfirst = *--pend;
	//*++pfirst = *--pend;
	//*++pfirst = *--pend;
	//*++pfirst = *--pend;
	//*++pfirst = *--pend;
	//*pfirst++ = *pend--;
	//*pfirst++ = *pend--;
	//*pfirst++ = *pend--;
	//*pfirst++ = *pend--;
	//*pfirst++ = *pend--;
	//*pfirst++ = *pend--;
	//*pfirst++ = *pend--;
	char* pHead = cname;

	*pHead = *pend;

	printf("%p\n", pHead);
	printf("%c\n", *pHead);

	*++pHead = *--pend;
	*++pHead = *--pend;
	*++pHead = *--pend;
	*++pHead = *--pend;
	*++pHead = *--pend;
	*++pHead = *--pend;
	*++pHead = *--pend;
	//*pHead++ = *pend--;
	//*pHead++ = *pend--;
	//*pHead++ = *pend--;
	//*pHead++ = *pend--;
	//*pHead++ = *pend--;
	//*pHead++ = *pend--;
	//*pHead++ = *pend--;




	//cout << cname << endl;

	//int a = 1;
	//if (a==2, a!=3) {
	//
	//	cout << a << endl;
	//}
	//while (a == 2, a == 3)
	//	cout << "while" << endl;





	return 0;

}

