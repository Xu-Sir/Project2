#pragma once
#include <iostream>
#include <fstream>
#include "worker.h"
#include "employee.h"
#include "boss.h"
#include "manager.h"


#define  URL_PATH  "F:/workerBook.txt"

//#define  capacity = 10

using namespace std;

class WorkerManager
{

public :
	WorkerManager();



	void showMenu();

	void exitSystem();

	~WorkerManager();

	int empNum;

	int capacity = 10;

	Worker** empArry;

	void addEmp();

	void resizeWorker();

	void showInfo();

	void save();

	void readWorkBook();

	void orderEmp();

	void cleanBook();

};