#include "WorkerManager.h"

WorkerManager::WorkerManager()
{
	//初始化人员和数组指针 
	this->empNum = 0;

	this->empArry = NULL;
	//初始化人员信息
	readWorkBook();


}

//菜单
void WorkerManager::showMenu()
{

	cout << "********************************************" << endl;
	cout << "*********  欢迎使用职工管理系统！ **********" << endl;
	cout << "*************  0.退出管理程序  *************" << endl;
	cout << "*************  1.增加职工信息  *************" << endl;
	cout << "*************  2.显示职工信息  *************" << endl;
	cout << "*************  3.删除离职职工  *************" << endl;
	cout << "*************  4.修改职工信息  *************" << endl;
	cout << "*************  5.查找职工信息  *************" << endl;
	cout << "*************  6.按照编号排序  *************" << endl;
	cout << "*************  7.清空所有文档  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}


//退出
void WorkerManager::exitSystem()
{
	cout << "bye !" << endl;
	system("pause");
	exit(0);
}

// 初始化和扩容数组
void WorkerManager::resizeWorker()
{
	if (empNum == 0)
	{
		//初始化数组
		if (empArry == NULL)
		{
			empArry = new Worker * [capacity];
		}
	}
	if (empNum == capacity)
	{
		//扩容
		capacity = capacity << 1;
		Worker** temp = empArry;
		empArry = new Worker * [capacity];
		for (int i = 0; i < empNum; i++)
		{
			empArry[i] = temp[i];
		}
		delete[] temp;
		temp = NULL;
	}

}


//添加成员
void WorkerManager::addEmp()
{
	resizeWorker();

	Worker* worker = NULL;

	int id;
	string name;
	int dSelect;
	cout << "请输入编号id" << endl;
	cin >> id;
	
	cout << "请输入姓名" << endl;
	cin >> name;

	cout << "请输入职位" << endl;
	cin >> dSelect;
	switch (dSelect)
	{
	case 1://普通
		worker = new Employee(id, name, dSelect);
		break;
	case 2://经理
		worker = new Manager(id, name, dSelect);
		break;
	case 3://老板
		worker = new Boss(id, name, dSelect);
		break;
	default:
		break;
	
	
	}

	empArry[this->empNum] = worker;
	this->empNum++;

	cout << "新增成功" << endl;
	save();
	system("pause");
	system("cls");

}


void WorkerManager::showInfo()
{
	for (int i = 0; i < empNum; i++)
	{
		empArry[i]->showInfo();

	}

}

void WorkerManager::save()
{
	//将数组写入文件
	ofstream ofs;
	ofs.open(URL_PATH, ios::out);
	if (!ofs.is_open())
	{
		cout << "写入 打开文件出错	" << endl;
		return;
	}
	for (int i = 0; i < empNum; i++)
	{
		ofs << empArry[i]->id << " "
			<< empArry[i]->name << " "
			<< empArry[i]->deptId << endl;
	}
	ofs.close();
}

void WorkerManager::readWorkBook()
{
	ifstream ifs;
	ifs.open(URL_PATH, ios::in);
	if (!ifs.is_open())
	{
		cout << "初始化读取文件失败	" << endl;
		ifs.close();
		return;
	}
	resizeWorker();
	int id, deptId;
	string name;
	while (ifs >> id >> name >> deptId)
	{
		switch (deptId)
		{
		case 1://普通
			empArry[empNum] = new Employee(id, name, deptId);
			break;
		case 2://经理
			empArry[empNum] = new Manager(id, name, deptId);
			break;
		case 3://老板
			empArry[empNum] = new Boss(id, name, deptId);
			break;
		default:
			break;


		}
		empNum++;
	}

	ifs.close();

}

void WorkerManager::orderEmp( )
{
	cout << "1 按正序排序" << endl;
	cout << "2 按倒序排序" << endl;
	int index;

	cin >> index;

	for (int i = 0; i < empNum; i++)
	{
		for (int j = i + 1; j < empNum; j++)
		{
			Worker*  tem;
			if (index == 1)
			{
				if (empArry[i]->id > empArry[j]->id) {
					tem = empArry[i];
					empArry[i] = empArry[j];

					empArry[j] = tem;
				}
			}
			else if (index == 2)
			{
				if (empArry[i]->id < empArry[j]->id) {
					tem = empArry[i];
					empArry[i] = empArry[j];
					empArry[j] = tem;
				}
			}
			else
				break;
			tem = NULL;

		}

	}

	if (index == 1) {

	}



}


void WorkerManager::cleanBook()
{
	if (empNum == 0)
	{
		cout << "无人员信息" << endl;
		return;
	}
	//清除文件 重新创建
	//ofstream ifs;
	//ifs.open(URL_PATH, ios::trunc);
	//ifs.close();
	//清除内存
	if (this->empArry != NULL)
	{
		for (int i = 0; i < this->empNum; i++)
		{
			if (this->empArry[i] != NULL)
			{
				delete this->empArry[i];
			}

		}
	}

	this->empNum = 0;
	delete[] empArry;
	this->empArry = NULL;


}












WorkerManager::~WorkerManager()
{

}

