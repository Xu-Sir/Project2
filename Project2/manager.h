#pragma once
#include <iostream>
#include <string>
#include "worker.h"

class Manager : public Worker
{
public:
	Manager(int idp, string namep, int didp);

	void showInfo();

	string getDeptName();

};