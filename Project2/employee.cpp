#include "employee.h"

Employee::Employee(int idp, string namep, int didp)
{
	this->id = idp;
	this->name = namep;
	this->deptId = didp;
}

void Employee::showInfo()
{
	cout << "职工编号： " << this->id
		<< " \t职工姓名： " << this->name
		<< " \t岗位：" << this->getDeptName()
		<< " \t岗位职责：完成经理交给的任务" << endl;

}

string Employee::getDeptName()
{

	return string("员工");
}