#include<iostream>
#include<string>
using namespace std;
#include<vector>
#include<algorithm>

void test01(){
    vector<int> v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(20);
    v.push_back(20);
    v.push_back(30);

    int num = count(v.begin(), v.end(), 20);
    cout << num << endl;
}

class Person{
public:
    Person(string name, int age){
        this->m_Name = name;
        this->m_Age = age;
    }
    bool operator==(const Person &p){
        if(this->m_Age == p.m_Age){
            return true;
        }else{
            return false;
        }
    }
    string m_Name;
    int m_Age;
};

void test02(){
    vector<Person> v;
    Person p1("aaa", 10);
    Person p2("bbb", 30);
    Person p3("ccc", 30);
    Person p4("ddd", 40);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    Person p("eee", 30);
    int num = count(v.begin(), v.end(), p);
    cout << num << endl;
}

int main(){
    test02();

    system("pause");
    return 0;
}
