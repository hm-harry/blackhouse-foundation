#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Identity.h"
#include"orderFile.h"

using namespace std;

class Teacher: public Identity{
public:
    Teacher();
    Teacher(int empId, string name, string pwd);
    virtual void operMenu();
    void showAllOrder();
    void validOrder();
    void inputId(int id);
    int outputId();
    void teacherMenu(Identity* &teacher);
    string showName();
    string showPwd();

private:
    int empId;
};
