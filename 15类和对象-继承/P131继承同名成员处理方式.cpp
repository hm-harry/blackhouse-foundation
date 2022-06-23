#include<iostream>
#include<iostream>
#include<string>
using namespace std;

class Base {
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base - func()" << endl;
	}

	void func(int a)
	{
		cout << "Base - func(int a)" << endl;
	}

public:
	int m_A;
};

class Son : public Base {
public:
	Son()
	{
		m_A = 200;
	}

	//当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数
	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
	void func()
	{
		cout << "Son - func()" << endl;
	}
public:
	int m_A;
};

void test01()
{
	Son s;

	cout << "Son.m_A = " << s.m_A << endl;
	cout << "Base.m_A = " << s.Base::m_A << endl;

	s.func();
	s.Base::func();
	s.Base::func(10);
}

int main(){
    test01();

    system("pause");
    return 0;
}
