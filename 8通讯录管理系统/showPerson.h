#include<iostream>
#include"Struct.h"
using namespace std;

void showPeron(Addressbooks abs);

void showPeron(Addressbooks abs){
    if(abs.m_Size == 0){
        cout << "NO person" << endl;
    }else{
        for(int i = 0; i < abs.m_Size; i++){
            cout << "name: " << abs.personArray[i].m_Name << "\t";
            cout << "gender: " << (abs.personArray[i].m_Sex == 1 ? "male" : "female") << "\t";
            cout << "age: " << abs.personArray[i].m_Age << "\t";
            cout << "phone: " << abs.personArray[i].m_Phone << endl;
        }

        cout << "successfully show" << endl;
        system("pause"); // 按任意键继续. . .
        system("cls"); // 清屏
    }
}