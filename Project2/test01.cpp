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
		cout << "请输入：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://退出
			wmg.exitSystem();
			break;
		case 1://添加职工
			wmg.addEmp();
			break;
		case 2://显示	
			wmg.showInfo();
			break;
		case 3://删除
			break;
		case 4://修改	
			break;
		case 5://查找
			break;
		case 6://排序
			wmg.orderEmp();
			break;
		case 7://清空
			wmg.cleanBook();
			break;
		default:
			system("cls");
			break;
		}



	}




	return 0;
}
