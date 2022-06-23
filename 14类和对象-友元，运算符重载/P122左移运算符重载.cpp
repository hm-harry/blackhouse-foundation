#include<iostream>
#include<iostream>
#include<string>
using namespace std;
//  左移运算符重载
class Person{
friend ostream& operator<<(ostream& cout,Person& p);
public:
    Person(int a, int b);
private:
    //成员函数 实现不了  p << cout 不是我们想要的效果
	//void operator<<(Person& p){
	//}
    int m_A;
    int m_B;

};

Person::Person(int a, int b){
    m_A = a;
    m_B = b;
}

ostream& operator<<(ostream& cout,Person& p){
    cout << "p.m_A = " << p.m_A << " " << "p.m_B = " << p.m_B;
    return cout;
}

void test01(){
    Person p(10, 10);
    cout << p << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
