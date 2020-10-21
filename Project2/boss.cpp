#include "boss.h"

Boss::Boss(int idp, string namep, int didp)
{
	this->id = idp;
	this->name = namep;
	this->deptId = didp;
}

void Boss::showInfo()
{
	cout << "职工编号： " << this->id
		<< " \t职工姓名： " << this->name
		<< " \t岗位：" << this->getDeptName()
		<< " \t岗位职责：管理公司所有事务" << endl;
}

string Boss::getDeptName()
{

	return string("总裁");
}

