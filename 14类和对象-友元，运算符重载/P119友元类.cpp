#include<iostream>
#include<iostream>
#include<string>
using namespace std;
// 类做友元
class Building;
class goodGay{
public:
    goodGay();

    void visit();
    Building *building;
};

class Building{
    friend class goodGay;
public:
    Building();
    string m_StittingRoom;

private:
    string m_BadRoom;
};

goodGay::goodGay(){
    building = new Building;
}

void goodGay::visit(){
    cout << "in " << building->m_StittingRoom << endl;
    cout << "in " << building->m_BadRoom << endl;
}

Building::Building()
{
    m_StittingRoom = "StittingRoom";
    m_BadRoom = "BadRoom";
}

void test01(){
    goodGay gg;
    gg.visit();
}

int main(){
    test01();

    system("pause");
    return 0;
}
