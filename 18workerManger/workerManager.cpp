#pragma once
#include "workerManager.h"

WorkerManager::WorkerManager(){
	// m_EmpNum = 0;
	// m_EmpArray = NULL;
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	m_FileIsEmpty = false;
	if(!ifs.is_open()){
		cout << "no find file" << endl;
		m_EmpNum = 0;
		m_EmpArray = NULL;
		m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	char ch;
	ifs >> ch;
	if(ifs.eof()){
		// 文件为空
		cout << "file is empty" << endl;
		m_EmpNum = 0;
		m_EmpArray = NULL;
		m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	int num = get_EmpNum();
	cout << "the num of emp is " << num << endl;
	m_EmpNum = num;

	this->m_EmpArray = new worker*[this->m_EmpNum];
	this->init_Emp();

	// 测试代码
	// for(int i = 0; i < m_EmpNum ;i++){
	// 	cout << "id: " << m_EmpArray[i]->m_ID << "\t" << "name: " << m_EmpArray[i]->m_Name << "\t" <<  m_EmpArray[i]->getDeptName() << endl;
	// }
}

WorkerManager::~WorkerManager(){
    if(m_EmpArray != NULL){
		for(int i = 0; i < m_EmpNum; i++){
			delete m_EmpArray[i];
			m_EmpArray[i] = NULL;
		}
		delete[] m_EmpArray;
		m_EmpArray = NULL;
		m_EmpNum = 0;
		m_FileIsEmpty = true;
	}
}

void WorkerManager::save(){
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for(int i = 0; i < m_EmpNum; i++){
		ofs << m_EmpArray[i]->m_ID << " " 
			<< m_EmpArray[i]->m_Name << " "	
			<< m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}

void WorkerManager::Show_Menu(){
    cout << "*************************************" << endl;
	cout << "*********     welcome      **********" << endl;
	cout << "*************  0.exit   *************" << endl;
	cout << "*************  1.add    *************" << endl;
	cout << "*************  2.show   *************" << endl;
	cout << "*************  3.delete *************" << endl;
	cout << "*************  4.manage *************" << endl;
	cout << "*************  5.find   *************" << endl;
	cout << "*************  6.sort   *************" << endl;
	cout << "*************  7.clear  *************" << endl;
	cout << "*************************************" << endl;
	cout << endl;
}

void WorkerManager::exitSystem(){
	cout << "Welcome you again!" << endl;
	system("pause");
	exit(0);
}

void WorkerManager::Add_Emp(){
	cout << "input Worker number:" << endl;

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		int newSize = m_EmpNum + addNum;
		worker **newSpace = new worker*[newSize];
		
		for(int i = 0; i < m_EmpNum; i++){
			newSpace[i] = m_EmpArray[i];
		}
		for(int i = 0; i < addNum; i++){
			int id;
			string name;
			int dSelect;
			cout << "please input :" << i+1 << " id:" << endl;
			cin >> id;
			cout << "please input :" << i+1 << " name:" << endl;
			cin >> name;
			cout << "please input :" << i+1 << " department:" << endl;
			cout << "1.employee" << "\t" << "2.manage" << "\t" << "3.boss" << endl;
			cin >> dSelect;
			worker *new_worker = NULL;
			switch (dSelect)
			{
			case 1:
				new_worker = new Employee(id, name, dSelect);
				break;
			case 2:
				new_worker = new Manage(id, name, dSelect);
				break;
			case 3:
				new_worker = new Boss(id, name, dSelect);
				break;
			default:
				break;
			}
			newSpace[m_EmpNum + i] = new_worker;
			
		}
		delete []m_EmpArray;
		m_EmpArray = newSpace;
		m_EmpNum = newSize;
		m_FileIsEmpty = false;
		cout << "successfully add " << addNum << " worker" << endl;
		save();
	}
	else
	{
		cout << "input error" << endl;
	}
	system("pause");
	system("cls");
}

int WorkerManager::get_EmpNum(){
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;
	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}
	return num;
}

void WorkerManager::init_Emp(){
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		worker *workers = NULL;
		if(dId == 1){
			workers = new Employee(id, name, dId);
		}
		else if(dId == 2){
			workers = new Manage(id, name, dId);
		}
		else if(dId == 3){
			workers = new Boss(id, name, dId);
		}
		this->m_EmpArray[index] = workers;
		index++;
	}
	ifs.close();
}

void WorkerManager::Show_Emp(){
	if(m_FileIsEmpty){
		cout << "FileIsEmpty" << endl;
	}else{
		for (int i = 0; i < m_EmpNum; i++)
		{
			m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Del_Emp(){
	if(m_FileIsEmpty){
		cout << "no find file or the file is empty" << endl;
	}else{
		cout << "input the id you want to del:" << endl;
		int id;
		cin >> id;
		int index = IsExist(id);
		if(index == -1){
			cout << "input id is not exit!" << endl;
		}else{
			if(m_EmpNum > 1){
				for(int i = index; i < m_EmpNum - 1; i++){
					m_EmpArray[i] = m_EmpArray[i + 1];
				}
				m_EmpNum--;
			}else{
				delete []m_EmpArray;
				m_EmpArray = NULL;
				m_EmpNum--;
			}
			save();
			cout << "delete successfully" << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Mod_Emp(){
	if(m_FileIsEmpty){
		cout << "no find file or the file is empty" << endl;
	}else{
		cout << "input the id you want to modify:" << endl;
		int id;
		cin >> id;

		int index = IsExist(id);
		if(index == -1){
			cout << "input id is not exit!" << endl;
		}else{
			delete m_EmpArray[index];

			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "find the" << id << "worker" << endl;
			cout << "input the new id:" << endl;
			cin >> newId;
			cout << "input the new name:" << endl;
			cin >> newName;
			cout << "input the new work:" << endl;
			cout << "1.employee" << "\t" << "2.manage" << "\t" << "3.boss" << endl;
			cin >> dSelect;
			worker *new_worker;
			switch (dSelect)
			{
			case 1:
				new_worker = new Employee(newId, newName, dSelect);
				break;
			case 2:
				new_worker = new Manage(newId, newName, dSelect);
				break;
			case 3:
				new_worker = new Boss(newId, newName, dSelect);
				break;
			default:
				break;
			}
			m_EmpArray[index] = new_worker;
			cout << "modify successfully!" << endl;
		}
		save();
	}
	system("pasue");
	system("cls");
}

void WorkerManager::Find_Emp(){
	if(m_FileIsEmpty){
		cout << "no find file or the file is empty" << endl;
	}else{
		cout << "input the style of finding: 1.find by id   2.find by name:" << endl;
		int select;
		cin >> select;
		if(select == 1){
			int id;
			cout << "please input the id you want to find:" << endl;
			cin >> id;
			int ret = IsExist(id);
			if(ret == -1){
				cout << "input id is not exit!" << endl;
			}else{
				cout << "the information of the worker you want:" << endl;
				m_EmpArray[ret]->showInfo();
			}
		}else if(select == 2){
			string name;
			cout << "please input the name you want to find:" << endl;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < m_EmpNum; i++)
			{
				if(m_EmpArray[i]->m_Name == name){
					cout << "the information of the worker you want:" << endl;
					m_EmpArray[i]->showInfo();
					flag = true;
				}
			}
			if (!flag)
			{
				cout << "input name is not exit!" << endl;
			}
		}else{
			cout << "wrong input!" << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Sort_Emp(){
	if(m_FileIsEmpty){
		cout << "no find file or the file is empty" << endl;
		system("pause");
		system("cls");
	}else{
		cout << "choose the sort way" << endl;
		cout << "1.ascending  2.descending" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < m_EmpNum; i++){
			int MinOrMax = i;
			if(select == 1){
				for(int j = i + 1; j < m_EmpNum; j++){
					if(m_EmpArray[MinOrMax]->m_ID > m_EmpArray[j]->m_ID){
						MinOrMax = j;
					}
				}
			}else{
				for(int j = i + 1; j < m_EmpNum; j++){
					if(m_EmpArray[MinOrMax]->m_ID < m_EmpArray[j]->m_ID){
						MinOrMax = j;
					}
				}
			}
			if (MinOrMax != i)
			{
				worker *temp = m_EmpArray[i];
				m_EmpArray[i] = m_EmpArray[MinOrMax];
				m_EmpArray[MinOrMax] = temp;
			}
			
		}
		cout << "sort successfully!" << endl;
		Show_Emp();
	}
}

void WorkerManager::Clean_File(){
	cout << "are you sure to clean file?" << endl;
	cout << "1.yes" << endl;
	cout << "2.no" << endl;
	int select = 0;
	cin >> select;
	if(select == 1){
		ofstream ofs(FILENAME, ios::trunc);//删除文件后重建
		ofs.close();
		if(m_EmpArray != NULL){
			for(int i = 0; i < m_EmpNum; i++){
				delete m_EmpArray[i];
				m_EmpArray[i] = NULL;
			}
			delete[] m_EmpArray;
			m_EmpArray = NULL;
			m_EmpNum = 0;
			m_FileIsEmpty = true;
		}
		cout << "successfully clean!" << endl;
	}
	system("pause");
	system("cls");
}

int WorkerManager::IsExist(int id){
	int index = -1;
	for(int i = 0; i < m_EmpNum; i++){
		if(m_EmpArray[i]->m_ID == id){
			index = i;
		}
	}
	return index;
}

