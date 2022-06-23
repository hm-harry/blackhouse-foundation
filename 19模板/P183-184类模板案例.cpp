#include<iostream>
#include<string>
using namespace std;
#include"myArray.hpp"

void PrintmyArray1(myArray<int>& arr){
    for(int i = 0; i < arr.getSize(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test01(){
    myArray<int> arr1(5);
    for(int i = 0; i < 5; i++){
        arr1.Push_back(i);
    }
    cout << "arr1 = ";
    PrintmyArray1(arr1);

    myArray<int> arr2(arr1);
    arr2.Pop_back();
    cout << "arr2 = ";
    PrintmyArray1(arr2);

    myArray<int> arr3(100);
    arr3 = arr2;
    cout << "arr3 = ";
    PrintmyArray1(arr3);
}

class Person {
public:
    friend void PrintmyArray2(Person& arr);
	Person() {} 
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
public:
	string m_Name;
	int m_Age;
};

void PrintmyArray2(myArray<Person> &arr){
    for(int i = 0; i < arr.getSize(); i++){
        cout << arr[i].m_Name << " " << arr[i].m_Age << endl;
    }
}

void test02(){
    myArray<Person>arr(10);
    Person p1("a", 10);
    Person p2("b", 20);
    Person p3("c", 30);
    Person p4("d", 40);
    arr.Push_back(p1);
    arr.Push_back(p2);
    arr.Push_back(p3);
    arr.Push_back(p4);
    PrintmyArray2(arr);
}

int main(){
    test02();

    system("pause");
    return 0;
}
