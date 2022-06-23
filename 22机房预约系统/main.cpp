#include<iostream>
#include"menu.h"
#include"LoginIn.h"
#include"globalFile.h"

using namespace std;

int main(){
    char sure = 'N';
    int select = 0;
    int key = 1;
    
    while(1 && key){
        menu();
        cin >> select;
        switch (select)
        {
        case 1://学生身份
            key = LoginIn(STUDENT_FILE, 1);
            break;
        case 2://老师身份
            key = LoginIn(TEACHER_FILE, 2);
            break;
        case 3://管理员身份
            key = LoginIn(ADMIN_FILE, 3);
            break;
        case 0://退出
            cout << "are you sure to exit? Y/N" << endl;
            cin >> sure;
            if(sure == 'Y' || sure == 'y'){
                cout << "see you!" << endl;
                system("pause");
                return 0;
            }else if(sure == 'N'){
                break;
            }else{
                cout << "input error! please input again:" << endl;
                system("pause");
                system("cls");
                break;
            }
        default:
            cout << "input error! please input again:" << endl;
            system("pause");
            system("cls");
            break;
        }

    }
    system("pause");
    return 0;
}
