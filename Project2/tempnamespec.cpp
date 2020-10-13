#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

template <typename T > inline T const& Max(T const& a, T const& b) {

	return a < b ? b : a;

}

template <typename T> inline T add(T a, T b) {


	return a + b;

}


template <typename T, typename E> T  print(T a, E b) {


	return  a + to_string(b);
}




//int main() {


	//int i = 39;
	//int j = 30;

	//cout << "两个数中比较大的数是 " << Max(i, j) << endl;
	//cout << "add int " << add(i, j) << endl;


	//double d1 = 32.4;
	//double d2 = 33.44;
	//cout << "d1 d2 " << Max(d1, d2) << endl;

	//string s1 = "Wpllo1";
	//string s2 = "World";
	//cout << "string 1 2 compare " << Max(s1, s2) << endl;
	//cout << "string add \t" << add(s1, s2) << endl;

	//cout << "恭喜你  你电脑已经被我植入病毒了  你现在关机还来得及。。。。" << endl;
	//Sleep(2000);
	//system("cls");
	//cout <<5<<endl;
	//Sleep(1000);
	//system("cls");
	//cout << 4 << endl;
	//Sleep(1000);
	//system("cls");
	//cout << 3 << endl;
	//Sleep(1000);
	//system("cls");
	//cout << 2 << endl;
	//Sleep(1000);
	//system("cls");
	//cout << 1 << endl;
	//Sleep(1000);
	//system("cls");
	//cout << "植入完成， 重启中。。。" << endl;
	//int i = 0;
	//string s3 = "重启进度";
	//string s4 = ">>";
	//string s5 = "";
	//while (i<10) {
	//	Sleep(1500);
	//	system("cls");
	//	s3 += s4;
	//	cout << s3 << endl;
	//	i++;
	//}

	//string str1 = "adaa";
	//int b = 2;

	//cout << print(str1, b) << endl;
	//int a = 20;
	//string b = "e3";
	//cout << to_string(a) + b << endl;

	//string c = to_string(a) + b;

	//cout << c << endl;

	//print()
	


//}


