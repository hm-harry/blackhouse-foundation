#include<iostream>
using namespace std;
#include"split.cpp"

int main(){
    int a = 1;
    int b = 2;
    swap(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    system("pause");
    return 0;
}