#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2> 
class Person;

template<class T1, class T2>
void printPerson2(Person<T1, T2> &p){
    cout << "name: " << p.m_Name << " age:" << p.m_Age << endl;
}

template<class T1, class T2>
class Person
{
    //1、全局函数配合友元   类内实现
    friend void printPerson(Person<T1, T2> &p){
        cout << "name: " << p.m_Name << " age:" << p.m_Age << endl;
    }
    //全局函数配合友元  类外实现
    friend void printPerson2<>(Person<T1, T2> &p);
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;

};

void test01(){
    Person<string, int>p1("Tom", 10);
    Person<string, int>p2("Jerry", 10);

    printPerson(p1);
    printPerson2(p2);
}

int main(){
    test01();

    system("pause");
    return 0;
}
