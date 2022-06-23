#include"addPerson.h"
using namespace std;

void addPerson(Addressbooks * abs){
    if(abs->m_Size == MAX){
        cout << "NO SPACE" << endl;
    }else{
        string name;
        cout << "input name" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;

        int gender = 3;
        cout << "input gender 1.male 2.female" << endl;
        cin >> gender;
        abs->personArray[abs->m_Size].m_Sex = gender;
        while(gender != 1 && gender != 2){
            cout << "input wrong!!!" << endl;
            cout << "input gender 1.male 2.female" << endl;
            cin >> gender;
            abs->personArray[abs->m_Size].m_Sex = gender;
        }

        int age = 0;
        cout << "input age:" << endl;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;
        while(age >= 100 || gender <= 0){
            cout << "input wrong!!!" << endl;
            cout << "input gender 1.male 2.female" << endl;
            cin >> age;
            abs->personArray[abs->m_Size].m_Age = age;
        }

        string phone;
        cout << "input phone:" << endl;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        string address;
        cout << "input address:" << endl;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;

        abs->m_Size ++;
        cout << "successfully operate" << endl;
        system("pause"); // 按任意键继续. . .
        system("cls"); // 清屏
    }
}