#include "manager.h"

Manager::Manager(int idp, string namep, int didp)
{
	this->id = idp;
	this->name = namep;
	this->deptId = didp;
}

void Manager::showInfo()
{

	cout << "ְ����ţ� " << this->id
		<< " \tְ�������� " << this->name
		<< " \t��λ��" << this->getDeptName()
		<< " \t��λְ������ϰ彻��������,���·������Ա��" << endl;
}

string Manager::getDeptName()
{

	return string("����");

}