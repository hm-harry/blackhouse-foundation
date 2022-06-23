#pragma once

#include<iostream>
using namespace std;
#include<string>
#define MAX 1000

struct Person
{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};

struct Addressbooks
{
    struct Person personArray[MAX];
    int m_Size;
};
