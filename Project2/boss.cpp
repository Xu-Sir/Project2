#include "boss.h"

Boss::Boss(int idp, string namep, int didp)
{
	this->id = idp;
	this->name = namep;
	this->deptId = didp;
}

void Boss::showInfo()
{
	cout << "ְ����ţ� " << this->id
		<< " \tְ�������� " << this->name
		<< " \t��λ��" << this->getDeptName()
		<< " \t��λְ�𣺹���˾��������" << endl;
}

string Boss::getDeptName()
{

	return string("�ܲ�");
}

