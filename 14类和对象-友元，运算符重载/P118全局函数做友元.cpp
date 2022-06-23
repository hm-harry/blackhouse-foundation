#include<iostream>
#include<iostream>
#include<string>
using namespace std;

class Building{
    //告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容
    friend void goodGay(Building building);
public:
    Building(){
        m_StittingRoom = "StittingRoom";
        m_BadRoom = "BadRoom";
    }
    string m_StittingRoom;

private:
    string m_BadRoom;
};
// 全局函数
void goodGay(Building building){
    cout << "in " << building.m_StittingRoom << endl;
    cout << "in " << building.m_BadRoom << endl;
}

int main(){
    Building building;
    goodGay(building);

    system("pause");
    return 0;
}
