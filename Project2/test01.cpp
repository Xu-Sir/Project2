#include <iostream>
#include "worker.h"
#include "workerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"




using namespace std;



















int maintest()
{

	WorkerManager wmg;
	int choice = 0;

	while (true)
	{
		wmg.showMenu();
		cout << "�����룺" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://�˳�
			wmg.exitSystem();
			break;
		case 1://���ְ��
			wmg.addEmp();
			break;
		case 2://��ʾ	
			wmg.showInfo();
			break;
		case 3://ɾ��
			break;
		case 4://�޸�	
			break;
		case 5://����
			break;
		case 6://����
			wmg.orderEmp();
			break;
		case 7://���
			wmg.cleanBook();
			break;
		default:
			system("cls");
			break;
		}



	}




	return 0;
}
