#include<iostream>
using namespace std;
int main(){
    // 定义指针
    int a = 10;
    int * p;
    p = &a;

    cout << "a's adress: " << &a << endl;
    cout << "p's: " << p << endl;
    cout << "a's: " << a << endl;
    cout << "*p's: " << *p << endl;

    *p = 1000;
    cout << "a's: " << a << endl;
    cout << "*p's: " << *p << endl;

    system("pause");
    return 0;
}