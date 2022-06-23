#pragma once
#include<iostream>
using namespace std;

template<class T>
class myArray{
public:
	//构造函数
	myArray(int capacity){
		this->m_capcity = capacity;
		this->m_Size = 0;
		pAddress = new T[this->m_capcity];
	}

    //拷贝构造
    myArray(const myArray& arr){
        this->m_capcity = arr.m_capcity;
        this->m_Size = arr.m_Size;
        // 深拷贝，防止浅拷贝堆区数据重复释放
        this->pAddress = new T[arr.m_capcity];
        for(int i = 0; i < this->m_Size; i++){
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    myArray& operator=(const myArray& arr){
        if(this->pAddress != NULL){
            delete[] this->pAddress;
            this->pAddress = NULL;
            this->m_capcity = 0;
            this->m_Size = 0;
        }
        this->pAddress = new T[arr.m_capcity];
        this->m_capcity = arr.m_capcity;
        this->m_Size = arr.m_Size;
        for(int i = 0; i < this->m_Size; i++){
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;
    }

    //尾插法
    void Push_back(const T & val){
        if(this->m_capcity == this->m_Size){
            return;
        }
        this->pAddress[this->m_Size] = val;
        this->m_Size++;
    }

    // 尾删法
    void Pop_back(){
        if (this->m_Size == 0)
		{
			return;
		}
        m_Size--;
    }

    //重载[] 操作符  arr[0]
    T& operator[](int index){
        return this->pAddress[index];
    }

    //获取数组容量
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//获取数组大小
	int	getSize()
	{
		return this->m_Size;
	}
    
    ~myArray(){
        if(this->pAddress != NULL){
            delete[] this->pAddress;
            this->pAddress = NULL;
        }
    }

private:
    T *pAddress;
    int m_capcity;
    int m_Size;
};