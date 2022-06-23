#include<iostream>
#include<string>
#include"point.h"
#include"circle.h"
using namespace std;


bool isIncircle(Circle C, Point P){
    int dist = (P.getX() - C.get_m_Center().getX()) * (P.getX() - C.get_m_Center().getX()) + (P.getY() - C.get_m_Center().getY()) * (P.getY() - C.get_m_Center().getY());
    int r = C.get_m_R() * C.get_m_R();
    if (r > dist){
        return true;
    }else{
        return false;
    }
    
}
int main(){
    Circle c;
    c.set_m_R(10);
    c.set_m_Center(10,0);
    Point p;
    p.setX(0);
    p.setY(0);
    int ret = isIncircle(c, p);
    if(ret){
        cout << "in circle" << endl;
    }else{
        cout << "out circle" << endl;
    }

    system("pause");
    return 0;
}
