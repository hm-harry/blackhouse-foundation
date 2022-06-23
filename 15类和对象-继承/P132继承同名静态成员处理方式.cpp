#include<iostream>
#include<iostream>
#include<string>
using namespace std;

class Base {
public:
	static void func()
	{
		cout << "Base - static void func()" << endl;
	}
	static void func(int a)
	{
		cout << "Base - static void func(int a)" << endl;
	}

	static int m_A;
};

int Base::m_A = 100;

class Son: public Base{
public:
    static void func()
	{
		cout << "Son - static void func()" << endl;
	}
    static int m_A;
};

int Son::m_A = 200;

void test01(){
    Son s;
    cout << "s.m_A = " << s.m_A << endl;\
    cout << "s.Base::m_A = " << s.Base::m_A << endl;

    cout << "s.m_A = " << Son::m_A << endl;
    cout << "s.Base::m_A = " << Son::Base::m_A << endl;
}

void test02(){
    Son s;
	s.func();
	s.Base::func();

    Son::func();
    Son::Base::func();
    Son::Base::func(10);
}

int main(){
    test02();

    system("pause");
    return 0;
}
