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
    // ofstream ofs("person.txt",ios::out | ios::binary);
    ofstream ofs;
    ofs.open("person.txt",ios::out | ios::binary);
    Person p = {"zhangsan", 18};
    ofs.write((const char*)&p, sizeof(p));
    ofs.close();
}

int main(){
    test01();

    system("pause");
    return 0;
}
