#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>
#include"globalFile.h"
#include"Identity.h"
#include"student.h"
#include"teacher.h"
#include"computerRoom.h"

using namespace std;

class Manager: public Identity{
public:
    Manager();
    Manager(string name, string pwd);
    virtual void operMenu();
    void addPerson();
    void showPerson();
    void showComputer();
    void cleanFile();
    void managerMenu(Identity* &manager);
    void initVector();
    bool checkRepeat(int id, int type);

private:
    vector<Student> vStu;
    vector<Teacher> vTea;
    vector<ComputerRoom> vCom;
};

void printStudent(Student& s);

void printTeacher(Teacher& t);

void printComputer(ComputerRoom& c);