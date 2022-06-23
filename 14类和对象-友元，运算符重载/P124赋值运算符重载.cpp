#include<iostream>
#include<iostream>
#include<string>
using namespace std;

// 赋值运算符重载
class Person{
public:
    Person(int age){
        // m_age = &(age);
        m_age = new int(age);
    }

    ~Person(){
        if(m_age != NULL){
            delete m_age;
            m_age = NULL;
        }
    }

    Person& operator=(Person &p){
        if(m_age != NULL){
            delete m_age;
            m_age = NULL;
        }
        m_age = new int(*p.m_age);
        return *this;
    }
    int *m_age;
};

void test01(){
    Person p1(18);
    Person p2(20);
    Person p3(22);

    p1 = p2 = p3;

    cout << "p1.age = " << *p1.m_age << endl;
    cout << "p2.age = " << *p2.m_age << endl;
    cout << "p3.age = " << *p3.m_age << endl;
}

int main(){
    test01();    

    system("pause");
    return 0;
}
