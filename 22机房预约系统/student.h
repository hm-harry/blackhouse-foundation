#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include"Identity.h"
#include"computerRoom.h"
#include"globalFile.h"
#include"orderFile.cpp"

using namespace std;

class Student: public Identity{
public:
    Student();
    Student(int id, string name, string pwd);

    virtual void operMenu();
    
    void applyOrder();

    void showMyOrder();

    void showAllOrder();

    void cancelOrder();

    void inputId(int id);

    int outputId();

    string showName();

    string showPwd();

    void studentMenu(Identity* &student);

private:
    int m_id;

    vector<ComputerRoom> vCom;
};