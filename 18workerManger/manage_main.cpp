#include<iostream>
#include "workerManager.h"
#include "employee.h"
#include "manage.h"
#include "boss.h"
#include "workerManager.cpp"
#include "employee.cpp"
#include "manage.cpp"
#include "boss.cpp"
using namespace std;

int main(){
    WorkerManager wm;
    int choice = 0;
    while (true)
    {
        wm.Show_Menu();

        cout << "input your choice:" << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            wm.exitSystem();
            break;
        case 1:
            wm.Add_Emp();
            break;
        case 2:
            wm.Show_Emp();
            break;
        case 3:
            wm.Del_Emp();
            break;
        case 4:
            wm.Mod_Emp();
            break;
        case 5:
            wm.Find_Emp();
            break;
        case 6:
            wm.Sort_Emp();
            break;
        case 7:
            wm.Clean_File();
            break;
            
        default:
            system("cls");//清屏操作
            break;
        }
    }
    
    system("pause");
    return 0;
}