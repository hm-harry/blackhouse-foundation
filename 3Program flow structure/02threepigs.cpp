#include<iostream>
using namespace std;

void c02(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    cout << "input num1:" << endl;
    cin >> num1;
    cout << "input num2:" << endl;
    cin >> num2;
    cout << "input num3:" << endl;
    cin >> num3;

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;

    if(num1 > num2){
        if(num1 > num3){
            cout << "num1 max" << endl;
        }else{
            cout << "num3 max" << endl;
        }
    }else{
        if(num2 > num3){
            cout << "num2 max" << endl;
        }else{
            cout << "num3 max" << endl;
        }
    }
}