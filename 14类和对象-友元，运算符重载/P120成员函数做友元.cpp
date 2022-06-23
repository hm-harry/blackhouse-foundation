#include<iostream>
#include<iostream>
#include<string>
using namespace std;

class Building;
class Goodgay
{
public:
    Goodgay();

    void visit();
    void visit2();
    Building *building;
};

class Building{
    //告诉编译器  goodGay类中的visit成员函数 是Building好朋友，可以访问私有内容
    friend void Goodgay::visit();
public:
    Building();
    string m_StittingRoom;

private:
    string m_BadRoom;
};

Building::Building(){
    m_StittingRoom = "StittingRoom";
    m_BadRoom = "BadRoom";
}

Goodgay::Goodgay(){
    building = new Building;
}

void Goodgay::visit(){
    cout << "in " << building->m_StittingRoom << endl;
    cout << "in " << building->m_BadRoom << endl;
}

void Goodgay::visit2(){
    cout << "in " << building->m_StittingRoom << endl;
}

void test01(){
    Goodgay gg;
    gg.visit();
    gg.visit2();
}

int main(){
    test01();

    system("pause");
    return 0;
}