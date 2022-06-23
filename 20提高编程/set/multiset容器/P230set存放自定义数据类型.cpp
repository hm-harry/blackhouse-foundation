#include<iostream>
#include<string>
using namespace std;
#include<set>

class Person{
public:
    Person(string name, int age){
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};

class Mycompare{
public:
    bool operator()(const Person &p1, const Person &p2){
        return p1.m_Age < p2.m_Age;
    }
};

void test01(){
    set<Person, Mycompare>s;
    Person p1("a", 10);
    Person p2("b", 30);
    Person p3("c", 20);
    Person p4("d", 5);

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);

    for(set<Person, Mycompare>::iterator it = s.begin(); it != s.end(); it++){
        cout << "name: " << it->m_Name << " age: " << it->m_Age << endl;
    }
}

int main(){
    test01();

    system("pause");
    return 0;
}
