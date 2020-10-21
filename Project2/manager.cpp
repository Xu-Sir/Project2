#include "manager.h"

Manager::Manager(int idp, string namep, int didp)
{
	this->id = idp;
	this->name = namep;
	this->deptId = didp;
}

void Manager::showInfo()
{

	cout << "职工编号： " << this->id
		<< " \t职工姓名： " << this->name
		<< " \t岗位：" << this->getDeptName()
		<< " \t岗位职责：完成老板交给的任务,并下发任务给员工" << endl;
}

string Manager::getDeptName()
{

	return string("经理");

}