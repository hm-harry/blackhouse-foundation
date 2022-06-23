#include<iostream>
#include<ctime>
using namespace std;

int main(){
// 系统生成随机数0-99

    srand((unsigned int)time(NULL));

    int num = rand()%100 + 1;
    cout << num << endl;

    int value = 0;
    cin >> value;

    while(value != num){
        if(value > num){
            cout << "bigger" << endl;
        }else{
            cout << "smaller" << endl;
        }
        cout << "input value:" << endl;
        cin >> value;
    }
    cout << "equal" << endl;

    system("pause");
    return 0;
}