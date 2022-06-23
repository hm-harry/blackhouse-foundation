#include<iostream>
#include<iostream>
#include<string>
using namespace std;
class Person{
public:
    Person(string name, int age){
        m_Name = name;
        m_Age = age;
    }

    bool operator==(Person &p){
        if(this->m_Age == p.m_Age && this->m_Name == p.m_Name){
            return true;
        }else{
            return false;
        }
    }

    bool operator!=(Person & p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

    string m_Name;
    int m_Age;
};

void test01(){
    Person p1("a", 10);
    Person p2("b", 12);
    if (p1 == p2)
	{
		cout << "equal" << endl;
	}
	else
	{
		cout << "not equal" << endl;
	}

	if (p1 != p2)
	{
		cout << "!=" << endl;
	}
	else
	{
		cout << "==" << endl;
	}
}

int main(){
    test01();

    system("pause");
    return 0;
}
