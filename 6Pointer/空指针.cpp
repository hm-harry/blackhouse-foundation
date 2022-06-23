#include<iostream>
using namespace std;
// P58
int main(){
    // 定义空指针，初始化
    int a = 10;
    int * p = NULL;
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
