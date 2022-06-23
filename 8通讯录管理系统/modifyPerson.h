#include<iostream>
#include"Struct.h"
#include"isExist.h"
using namespace std;

void modifyPerson(Addressbooks * abs);

void modifyPerson(Addressbooks * abs){
    string name;
    cout << "input modity person's name:" << endl;
    cin >> name;
    if(abs->m_Size == 0 || isExist(*abs, name) == -1){
        cout << "NO that person" << endl;
    }else{
        int personNum = isExist(*abs, name);
        cout << "find that person,modifying..." << endl;

        string name;
        cout << "modify name" << endl;
        cin >> name;
        abs->personArray[personNum].m_Name = name;

        int gender = 3;
        cout << "modify gender 1.male 2.female" << endl;
        cin >> gender;
        abs->personArray[personNum].m_Sex = gender;
        while(gender != 1 && gender != 2){
            cout << "modify wrong!!!" << endl;
            cout << "modify gender 1.male 2.female" << endl;
            cin >> gender;
            abs->personArray[personNum].m_Sex = gender;
        }

        int age = 0;
        cout << "modify age:" << endl;
        cin >> age;
        abs->personArray[personNum].m_Age = age;
        while(age >= 100 || gender <= 0){
            cout << "modify wrong!!!" << endl;
            cout << "modify gender 1.male 2.female" << endl;
            cin >> age;
            abs->personArray[personNum].m_Age = age;
        }

        string phone;
        cout << "modify phone:" << endl;
        cin >> phone;
        abs->personArray[personNum].m_Phone = phone;

        string address;
        cout << "modify address:" << endl;
        cin >> address;
        abs->personArray[personNum].m_Addr = address;
        
        cout << "successfully modity!!!" << endl;
        system("pause"); // 按任意键继续. . .
        system("cls"); // 清屏
    }
}