#pragma once

#include<iostream>
#include"Struct.h"
using namespace std;

int isExist(Addressbooks abs, string name);

int isExist(Addressbooks abs, string name){
    bool find = false;
    if(abs.m_Size == 0){
        cout << "NO person" << endl;
        return -1;
    }else{
        for(int i = 0; i < abs.m_Size; i++){
            if(abs.personArray[i].m_Name == name){
                find = true;
                return i;
            }
        }
        if(!find){
            return -1;
        }
    }
}