#include<iostream>
using namespace std;
//设计一个圆类，求圆的周长
const double PI = 3.14;

class Circle{
public:
    int m_r;
    double calculateZC(){
        return 2 * PI * m_r;
    }
};

int main(){
    Circle cl;
    cl.m_r = 10;

    cout << "calculateZC:" << cl.calculateZC() << endl;
    system("pause");
    return 0;
}