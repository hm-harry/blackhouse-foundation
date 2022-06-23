#pragma once
#include<iostream>
#include<map>
#include<string>
#include<fstream>
#include"globalFile.h"

using namespace std;

class OrderFile{
public:
    OrderFile();

    void updateOrder(map<int, map<string, string>> tmp);

    int getSize();

    map<int, map<string, string>> getOrderData();

private:
    int m_Size;

    map<int, map<string, string>> m_orderData;
};

pair<string, string> find(string s);