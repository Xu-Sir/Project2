#include "employee.h"

Employee::Employee(int idp, string namep, int didp)
{
	this->id = idp;
	this->name = namep;
	this->deptId = didp;
}

void Employee::showInfo()
{
	cout << "ְ����ţ� " << this->id
		<< " \tְ�������� " << this->name
		<< " \t��λ��" << this->getDeptName()
		<< " \t��λְ����ɾ�����������" << endl;

}

string Employee::getDeptName()
{

	return string("Ա��");
}