#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Identity.h"
#include"student.cpp"
#include"teacher.cpp"
#include"manager.cpp"

using namespace std;
int LoginIn(string fileName, int type){
    Identity* person = NULL;
    
    ifstream* ifs = new ifstream();
    ifs->open(fileName, ios::in);
    if(!ifs->is_open()){
        cout << "no file" << endl;
        ifs->close();
        return 1;
    }
    int id;
    string name;
    string pwd;

    if(type == 1 || type == 2){
        cout << "please input your id: " << endl;
        cin >> id;
    }
    cout << "please input your name: " << endl;
    cin >> name;
    cout << "please input your password: " << endl;
    cin >> pwd;

    int fId = 0;
    bool key = false;
    string fName = "";
    string fPwd = "";

    switch (type)
    {
    case 1://学生身份进行验证
        while(*ifs >> fId && *ifs >> fName && *ifs >> fPwd){
            if(id == fId && fName == name && pwd == fPwd){
                key = true;
                cout << "successfully load in!" << endl;
                system("pause");
                system("cls");
                person = new Student(id, name, pwd);
                Student stu;
                stu.studentMenu(person);
                return 0;
            }
        }
        if(!key){
            cout << "fail to load in!" << endl;
            system("pause");
            system("cls");
            return 1;
        }
        break;
    case 2:
        while(*ifs >> fId && *ifs >> fName && *ifs >> fPwd){
            if(id == fId && name == fName && pwd == fPwd){
                key = true;
                cout << "successfully load in!" << endl;
                system("pause");
                system("cls");
                person = new Teacher(id, name, pwd);
                Teacher tea;
                tea.teacherMenu(person);
                return 0;
            }
        }
        if(!key){
            cout << "fail to load in!" << endl;
            system("pause");
            system("cls");
            return 1;
        }
        break;
    case 3:
        while(*ifs >> fName && *ifs >> fPwd){
            if(name == fName && pwd == fPwd){
                key = true;
                cout << "successfully load in!" << endl;
                system("pause");
                system("cls");
                person = new Manager(name, pwd);
                Manager man;
                man.managerMenu(person);
                return 0;
            }
        }
        if(!key){
            cout << "fail to load in!" << endl;
            system("pause");
            system("cls");
            return 1;
        }
        break;
    default:
        cout << "input error! please input again:" << endl;
        system("pause");
        system("cls");
        return 1;
    }
    return 1;
}