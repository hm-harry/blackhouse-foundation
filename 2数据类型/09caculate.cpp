#include<iostream>
#include<string>
using namespace std;

void c09(){
    int a1 = 1;
    int b1 = 2;

    cout << "a1 + b1 =" << a1+b1 << endl;
    cout << "a1 * b1 =" << a1*b1 << endl;
    cout << "a1 / b1 =" << a1/b1 << endl;

    double a2 = 1;
    double b2 = 2;
    cout << "a2 / b2 =" << a2/b2 << endl;

    cout << "a1 % b1 =" << a1 % b1 << endl;

    a1 = ++a1;
    b1 = b1++;
    cout << "++a1 = " << a1 << endl;
    cout << "b1++ = " << b1 << endl;

    a2 += 1;
    b2 -= 1;
    cout << "a2 += 1 = " << a2 << endl;
    cout << "b2 -= 1 = " << b2 << endl;
}