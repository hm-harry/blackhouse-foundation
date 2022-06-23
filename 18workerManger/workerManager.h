#pragma once
#include<iostream>
#include"worker.h"
#include"employee.h"
#include"manage.h"
#include"boss.h"
#include"fstream"
using namespace std;
#define FILENAME "empFile.txt"

class WorkerManager{
public:
    WorkerManager();

    void Show_Menu();
    
    void exitSystem();

    int m_EmpNum;

    worker **m_EmpArray;

    void Add_Emp();

    void save();

    bool m_FileIsEmpty;

    int get_EmpNum();

    void init_Emp();

    void Show_Emp();

    void Del_Emp();

    int IsExist(int id);

    void Mod_Emp();

    void Find_Emp();
    
    void Sort_Emp();

    void Clean_File();

    ~WorkerManager();
};