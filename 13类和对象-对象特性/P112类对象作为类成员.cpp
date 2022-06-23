#include<iostream>
#include<iostream>
#include<string>
using namespace std;

class Phone
{
public:
	Phone(string name)
	{
		m_PhoneName = name;
		cout << "Phone(string name)" << endl;
	}

	~Phone()
	{
		cout << "~Phone" << endl;
	}

	string m_PhoneName;

};

class Person
{
public:

	//初始化列表可以告诉编译器调用哪一个构造函数
	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person(string name, string pName) :m_Name(name), m_Phone(pName)" << endl;
	}

	~Person()
	{
		cout << "~Person" << endl;
	}

	void playGame()
	{
		cout << m_Name << " using " << m_Phone.m_PhoneName << ":PhoneName" << endl;
	}

	string m_Name;
	Phone m_Phone;

};

void test01(){
	Person p("zhangsan","iphone");
	cout << p.m_Name << " use " << p.m_Phone.m_PhoneName << endl;
}
int main(){
    test01();

    system("pause");
    return 0;
}
