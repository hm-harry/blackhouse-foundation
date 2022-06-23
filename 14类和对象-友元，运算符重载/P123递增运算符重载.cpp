#include<iostream>
#include<iostream>
#include<string>
using namespace std;
// 递增运算符重载
class MyInteger{
    friend ostream& operator<<(ostream &out, MyInteger m);
public:
    MyInteger(){
        m_Num = 0;
    }
    // 重载前置++运算符
    MyInteger& operator++(){
        m_Num++;
        return *this;
    }
    // void operator++(int) int是占位参数，可以区分前置和后置
    MyInteger operator++(int){
        MyInteger temp = *this;
        m_Num++;
        return temp;
    }

    MyInteger& operator--(){
        m_Num--;
        return *this;
    }
    // void operator++(int) int是占位参数，可以区分前置和后置
    MyInteger operator--(int){
        MyInteger temp = *this;
        m_Num--;
        return temp;
    }
private:
    int m_Num;

};

ostream& operator<<(ostream &out, MyInteger m){
    out << "m_Num = " << m.m_Num;
    return out;
}

void test01(){
    MyInteger myint;
    cout << ++(++myint) << endl;
    cout << (myint++) << endl;
    cout << (myint) << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
