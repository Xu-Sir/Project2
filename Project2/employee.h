#pragma once
#include <iostream>

#include "worker.h"
using namespace std;

class Employee : public Worker
{
public:
	Employee(int idp, string namep, int didp);

	void showInfo();

	string getDeptName();

};