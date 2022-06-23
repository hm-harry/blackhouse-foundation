#include<iostream>
using namespace std;
int main(){
    // break语句

    // int select = 0;
    // cout << "input num" << endl;
    // cin >> select;
    // switch (select)
    // {
    // case 1:
    //     cout << "1" << endl;
    //     break;
    // case 2:
    //     cout << "2" << endl;
    //     break;
    // case 3:
    //     cout << "3" << endl;
    //     break;    
    // default:
    //     break;
    // }

    // for(int i = 0; i < 10; i++){
    //     cout << i << endl;
    //     if(i == 5){
    //         break;
    //     }
    // }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (j == 5)
            {
                break;
                /* code */
            }
            
            cout << "*" << " ";
        }
        cout << endl;
    }
    system("pause");
}