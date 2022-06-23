#pragma once
#include<iostream>
#include<string>
#include"point.h"
using namespace std;

class Circle{
public:
    void set_m_R(int r);
    void set_m_Center(int x, int y);
    int get_m_R();
    Point get_m_Center();
private:
    int m_R;
    Point m_Center;
};

void Circle::set_m_R(int r){
    m_R = r;
}
void Circle::set_m_Center(int x, int y){
    m_Center.setX(x);
    m_Center.setX(y);
}
int Circle::get_m_R(){
    return m_R;
}
Point Circle::get_m_Center(){
    return m_Center;
}