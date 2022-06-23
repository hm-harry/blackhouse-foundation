#include<iostream>
#include<string>
using namespace std;
#include<queue>

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void test01(){
    queue<Person> q;

    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);

    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    while(!q.empty()){
        cout << "front name: " << q.front().m_Name << " age: "<< q.front().m_Age << endl;
        cout << "back name: " << q.back().m_Name << " age: "<< q.back().m_Age << endl;
        cout << endl;
        q.pop();
    }
    cout << q.size() << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
