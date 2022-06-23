#include<iostream>
using namespace std;
const double PI = 3.14;
// 在C++中 struct和class唯一的**区别**就在于 **默认的访问权限不同**

// 区别：

// * struct 默认权限为公共
// * class   默认权限为私有

class Circle1{
    int m_r;
    double calculateZC(){
        return 2 * PI * m_r;
    }
};

struct Circle2
{
    int m_r;
    double calculateZC(){
        return 2 * PI * m_r;
    }
};

int main(){
    // Circle1 cl;
    // cl.m_r = 10;

    // cout << "calculateZC:" << cl.calculateZC() << endl;

    Circle2 c2;
    c2.m_r = 10;

    cout << "calculateZC:" << c2.calculateZC() << endl;
    system("pause");
    return 0;
}