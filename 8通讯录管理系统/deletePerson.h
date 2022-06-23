#include<iostream>
#include"Struct.h"
#include"isExist.h"
using namespace std;

void deletePerson(Addressbooks * abs);

void deletePerson(Addressbooks * abs){
    string name;
    cout << "input delete name:" << endl;
    cin >> name;
    if(abs->m_Size == 0 || isExist(*abs, name) == -1){
        cout << "NO that person" << endl;
    }else{
        int personNum = isExist(*abs, name);
        cout << "find that person,deleting..." << endl;
        for(int i = personNum; i < abs->m_Size; i++){
            abs->personArray[i] = abs->personArray[i+1];
        }
        abs->m_Size--;
        cout << "successfully delete!!!" << endl;
        system("pause"); // 按任意键继续. . .
        system("cls"); // 清屏
    }
}