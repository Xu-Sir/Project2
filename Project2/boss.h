#pragma once
#include <iostream>
#include <string>
#include "worker.h"

using namespace std;

class Boss :public Worker
{
	Boss(int idp, string namep, int didp);
	void showInfo();
	string getDeptName();

};