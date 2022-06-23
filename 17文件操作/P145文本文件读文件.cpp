#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Person{
public:
    char m_Name[64];
	int m_Age;
};

void test01(){
    ifstream ifs;
    ifs.open("person.txt", ios::in | ios::binary);
    if(!ifs.is_open()){
        cout << "failed" << endl;
    }
    Person p;
    ifs.read((char *)&p, sizeof(p));

    cout << "name: " << p.m_Name << " age: " << p.m_Age << endl;

}

int main(){
    test01();

    system("pause");
    return 0;
}
