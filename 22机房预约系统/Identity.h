#pragma once
#include<iostream>
#include<string>

using namespace std;

//������ݻ���
class Identity{
public:
    friend class Manager;
    friend class Student;
    friend class Teacher;
    virtual void operMenu() = 0;
    
private:
    string m_Name;
    string m_Pwd;
};