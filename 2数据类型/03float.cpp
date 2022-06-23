#include<iostream>
using namespace std;
void c03(){
    float f1 = 3.14f;
    double d1 = 3.14;

    cout << "f1 = " << f1 << endl;
    cout << "d1 = " << f1 << endl;

    cout << "sizeof(float)" << sizeof(float) << endl;
    cout << "sizeof(double)" << sizeof(double) << endl;
    
    float f2 = 3e2;
    cout << "f2 = " << f2 << endl;

    float f3 = 3e-2;
    cout << "f2 = " << f3 << endl;
}
