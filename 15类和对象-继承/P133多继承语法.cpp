#include<iostream>
#include<iostream>
#include<string>
using namespace std;

class Base1 {
public:
	Base1()
	{
		m_A = 100;
	}
public:
	int m_A;
};

class Base2 {
public:
	Base2()
	{
		m_A = 200;  //开始是m_B 不会出问题，但是改为mA就会出现不明确
	}
public:
	int m_A;
};

class Son : public Base2, public Base1 
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}
public:
	int m_C;
	int m_D;
};

void test01(){
    Son s;
    cout << "sizeof(s) = " << sizeof(s) << endl;
    cout << "s.Base1::m_A = " << s.Base1::m_A << endl;
    cout << "s.Base2::m_A = " << s.Base2::m_A << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
