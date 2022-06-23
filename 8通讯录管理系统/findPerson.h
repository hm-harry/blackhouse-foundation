#include<iostream>
#include"Struct.h"
#include"isExist.h"
using namespace std;

void findPerson(Addressbooks abs, string name);

void findPerson(Addressbooks abs){
    string name;
    cout << "input find person's name:" << endl;
    cin >> name;
    if(abs.m_Size == 0 || isExist(abs, name) == -1){
        cout << "NO that person" << endl;
    }else{
        int personNum = isExist(abs, name);
        cout << "name: " << abs.personArray[personNum].m_Name << "\t";
        cout << "gender: " << (abs.personArray[personNum].m_Sex == 1 ? "male" : "female") << "\t";
        cout << "age: " << abs.personArray[personNum].m_Age << "\t";
        cout << "phone: " << abs.personArray[personNum].m_Phone << endl;
        cout << "successfully operate!!!" << endl;
        system("pause"); // 按任意键继续. . .
        system("cls"); // 清屏
    }
}