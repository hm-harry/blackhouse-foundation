#include<iostream>
#include<iostream>
#include<string>
using namespace std;
//1、构造函数分类
// 按照参数分类分为 有参和无参构造   无参又称为默认构造函数
// 按照类型分类分为 普通构造和拷贝构造
class Person{
public:
//构造函数
    Person(){
        cout << "Person function" << endl;
    }
    Person(int a){
        age = a;
        cout << "Person(int a) function" << endl;
    }
    Person(const Person &p){
        age = p.age;
        cout << "Person(const Person &p) function" << endl;
    }
//析构函数
    ~Person()
	{
		cout << "~Person function" << endl;
	}
    int getage(){
        return age;
    }
private:
    int age;
};

//2、构造函数的调用
//调用无参构造函数
void test01() {
    Person p1(10);
    Person p2(p1);

}



int main(){
    test01();

    system("pause");
    return 0;
}
