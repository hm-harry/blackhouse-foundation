#pragma once
#include<iostream>
#include<string>
using namespace std;
class Point{
public:
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
private:
    int m_X;
    int m_Y;
};

void Point::setX(int x){
    m_X = x;
}
void Point::setY(int y){
    m_Y = y;
}
int Point::getX(){
    return m_X;
}
int Point::getY(){
    return m_Y;
}