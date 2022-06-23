#include<iostream>
#include<string>
using namespace std;
#include<list>

class Person{
public:
    Person(string name, int age , int height) {
		m_Name = name;
		m_Age = age;
		m_Height = height;
	}

    string m_Name;
    int m_Age;
    int m_Height;
};

bool ComparePerson(Person &p1, Person &p2){
    if(p1.m_Age == p2.m_Age){
        return p1.m_Height > p2.m_Height;
    }else{
        return p1.m_Age < p2.m_Age;
    }
}

void test01(){
    list<Person> L;

    Person p1("a", 35 , 175);
	Person p2("b", 45 , 180);
	Person p3("c", 40 , 170);
	Person p4("d", 25 , 190);
	Person p5("e", 35 , 160);
	Person p6("f", 35 , 200);

    L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

    for(list<Person>::iterator it = L.begin(); it != L.end(); it++){
        cout << "m_Name: " << it->m_Name << " m_Age: "<<it->m_Age << " m_Height: " << it->m_Height << endl;
    }

    cout << endl;
    L.sort(ComparePerson);
    for(list<Person>::iterator it = L.begin(); it != L.end(); it++){
        cout << "m_Name: " << it->m_Name << " m_Age: "<<it->m_Age << " m_Height: " << it->m_Height << endl;
    }
}

int main(){
    test01();

    system("pause");
    return 0;
}
