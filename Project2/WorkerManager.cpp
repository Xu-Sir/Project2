#include "WorkerManager.h"

WorkerManager::WorkerManager()
{
	//��ʼ����Ա������ָ�� 
	this->empNum = 0;

	this->empArry = NULL;
	//��ʼ����Ա��Ϣ
	readWorkBook();


}

//�˵�
void WorkerManager::showMenu()
{

	cout << "********************************************" << endl;
	cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
	cout << "*************  0.�˳��������  *************" << endl;
	cout << "*************  1.����ְ����Ϣ  *************" << endl;
	cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "*************  3.ɾ����ְְ��  *************" << endl;
	cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5.����ְ����Ϣ  *************" << endl;
	cout << "*************  6.���ձ������  *************" << endl;
	cout << "*************  7.��������ĵ�  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}


//�˳�
void WorkerManager::exitSystem()
{
	cout << "bye !" << endl;
	system("pause");
	exit(0);
}

// ��ʼ������������
void WorkerManager::resizeWorker()
{
	if (empNum == 0)
	{
		//��ʼ������
		if (empArry == NULL)
		{
			empArry = new Worker * [capacity];
		}
	}
	if (empNum == capacity)
	{
		//����
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


//��ӳ�Ա
void WorkerManager::addEmp()
{
	resizeWorker();

	Worker* worker = NULL;

	int id;
	string name;
	int dSelect;
	cout << "��������id" << endl;
	cin >> id;
	
	cout << "����������" << endl;
	cin >> name;

	cout << "������ְλ" << endl;
	cin >> dSelect;
	switch (dSelect)
	{
	case 1://��ͨ
		worker = new Employee(id, name, dSelect);
		break;
	case 2://����
		worker = new Manager(id, name, dSelect);
		break;
	case 3://�ϰ�
		worker = new Boss(id, name, dSelect);
		break;
	default:
		break;
	
	
	}

	empArry[this->empNum] = worker;
	this->empNum++;

	cout << "�����ɹ�" << endl;
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
	//������д���ļ�
	ofstream ofs;
	ofs.open(URL_PATH, ios::out);
	if (!ofs.is_open())
	{
		cout << "д�� ���ļ�����	" << endl;
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
		cout << "��ʼ����ȡ�ļ�ʧ��	" << endl;
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
		case 1://��ͨ
			empArry[empNum] = new Employee(id, name, deptId);
			break;
		case 2://����
			empArry[empNum] = new Manager(id, name, deptId);
			break;
		case 3://�ϰ�
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
	cout << "1 ����������" << endl;
	cout << "2 ����������" << endl;
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
		cout << "����Ա��Ϣ" << endl;
		return;
	}
	//����ļ� ���´���
	//ofstream ifs;
	//ifs.open(URL_PATH, ios::trunc);
	//ifs.close();
	//����ڴ�
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

