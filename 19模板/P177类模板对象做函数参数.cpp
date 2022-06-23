#include<iostream>
#include<string>
using namespace std;
// 1. 指定传入的类型   --- 直接显示对象的数据类型
// 2. 参数模板化           --- 将对象中的参数变为模板进行传递
// 3. 整个类模板化       --- 将这个对象类型 模板化进行传递
template<class NameType, class AgeType = int> 
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->mName = name;
		this->mAge = age;
	}
	void showPerson()
	{
		cout << "name: " << this->mName << " age: " << this->mAge << endl;
	}
public:
	NameType mName;
	AgeType mAge;
};

void printPerson1(Person<string, int> &p) 
{
	p.showPerson();
}

void test01(){
    Person<string, int>p("a", 10);
    printPerson1(p);
}

template<class T1, class T2>
void printPerson2(Person<T1, T2>& p){
    p.showPerson();
    // cout << "typeid(T1).name: " << typeid(T1).name << endl;
    // cout << "typeid(T2).name: " << typeid(T2).name << endl;
}

void test02(){
    Person<string, int>p("b", 9);
    printPerson2(p);
}

template<class T>
void printPerson3(T & p)
{
	// cout << "T的类型为： " << typeid(T).name() << endl;
	p.showPerson();

}

void test03()
{
	Person <string, int >p("c", 8);
	printPerson3(p);
}

int main(){
    test01();
    test02();
    test03();

    system("pause");
    return 0;
}
