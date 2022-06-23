#include<iostream>
using namespace std;
#include"menu.h"
#include"Struct.h"
#include"addPerson.h"
#include"addPerson.cpp"
#include"showPerson.h"
#include"deletePerson.h"
#include"findPerson.h"
#include"modifyPerson.h"
#include"cleanPerson.h"
#include"isExist.h"


int main(){
    int select = 0;
    Addressbooks abs;

    while(1){
        showmenu();
        cin >> select;
        switch (select)
        {
        case 1:         //1.添加联系人
            addPerson(&abs);
            break;
        case 2:         //2.显示联系人
            showPeron(abs);
            break;
        case 3:         //3.删除联系人
            deletePerson(&abs);
            break;
        case 4:         //4.查找联系人
            findPerson(abs);
            break;     
        case 5:         //5.修改联系人
            modifyPerson(&abs);
            break;
        case 6:         //6.清空联系人
            cleanPerson(&abs);
            break;
        case 0:         //0.退出通信录
            cout << "welcome" << endl;
            system("pause");
            return 0;
            break;   
        default:
            break;
        }
    }
}