#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Person {

public:
	int age;
	char name[20];


};


class Article {

public :
	int no;
	char title[20];
	char subject[100];
	int page;
	char author[30];


	int operator()(int a, int b) {

		return a + b;
	}
};




int main33() {

	//Article art = { 1120, "这样学习LUNUX才对嘛", "解决办法1: 将cfd设置为非阻塞: fcntl 假如有多个客户端连接请求, cfd只会保留最后一个文件描述符的值", 30, "刘烨" };

	//ofstream ofs;
	//ofs.open("f:/article");
	//if (!ofs.is_open()){
	//	cout << "文件打开失败" << endl;
	//}
	//ofs.write((const char *)&art, sizeof(art));
	//ofs.close();


	//Article arti;
	//ifstream ifs;
	//ifs.open("f:/article");
	//if (!ifs.is_open()) {
	//	cout << "文件打开出错" << endl;
	//}
	//ifs.read((char *) &arti, sizeof(Article));
	//cout << arti.author << endl;
	//cout << arti.no << endl;
	//cout << arti.page << endl;
	//cout << arti.subject << endl;
	//cout << arti.title << endl;


	//ofstream ofs;
	//ofs.open("F://write.txt");
	//ofs << "我写的你认识吗老铁 ";
	//ofs.close();

	//ifstream ifs;

	//ifs.open("F://write.txt", ios::in);
	//cout << ifs.is_open() << endl;


	//缓冲数组
	//char buf[1024] = { 0 };
	//while (ifs >> buf) {
	//	cout << buf << endl;
	//}

	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf))) {
	//	cout << buf << endl;
	//}

	//string buf;
	//while (getline(ifs, buf)){
	//	cout << buf << endl;
	//}

	//char c;
	//while((c = ifs.get()) != EOF){
	//
	//	cout << c;
	//}
	//ifs.close();


	//Person per = { 38, "张三" };


	//ofstream ofs;
	//ofs.open("F://write.txt");
	//if (!ofs.is_open()){
	//	cout << "写入  打开文件失败" << endl;
	//}
	//ofs.write((const char *) &per, sizeof(Person));
	//ofs.close();

	//ifstream ifs;

	//ifs.open("F:/write.txt");
	//if (!ifs.is_open()){
	//	cout << "打开文件失败" << endl;
	//}

	//Person pers;

	//ifs.read( (char *)&pers, sizeof(pers));
	//cout << pers.age << endl;
	//cout << pers.name << endl;
	//char chp[] = pers.name;
	//cout << memset(pers.name, 0X00, sizeof(pers.name)) << endl;
	

	Article art;
	cout << art(10, 30) << endl;


	return 0;
}