#include<iostream>
#include<string>
using namespace std;
#include<vector>
#include<algorithm>

class GreaterFive{
public:
    bool operator()(int val){
        return val > 5;
    }
};

void test01(){
    vector<int> v;
    for(int i = 0; i < 10; i++){
        v.push_back(i);
    }
    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
    if(it == v.end()){
        cout << "no finding" << endl;
    }else{
        cout << "find: " << *it << endl;
    }
}

class Person{
public:
    Person(string name, int age){
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};

class GreaterAge20{
public:
    bool operator()(Person &p){
        return p.m_Age > 20;
    }
};

void test02(){
    vector<Person> v;
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    vector<Person>::iterator it = find_if(v.begin(), v.end(), GreaterAge20());
    if(it == v.end()){
        cout << "no finding" << endl;
    }else{
        cout << "find: " << it->m_Name << endl;
    }
}

int main(){
    test02();

    system("pause");
    return 0;
}
