#include<iostream>
#include"Struct.h"
using namespace std;

void cleanPerson(Addressbooks * abs);

void cleanPerson(Addressbooks * abs){
    abs->m_Size = 0;
    cout << "successfully clean!!!" << endl;
    system("pause"); // 按任意键继续. . .
    system("cls"); // 清屏
}