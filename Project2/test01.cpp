#include <iostream>
#include "worker.h"
#include "workerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"




using namespace std;



















int main()
{


	Worker* worker = NULL;
	worker = new Employee(1, "����", 2);
	worker->showInfo();
	delete worker;



	WorkerManager wmg;
	int choice = 0;

	while (true)
	{
		wmg.showMenu();
		cout << "�����룺" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			system("cls");
			break;
		}



	}




	return 0;
}
