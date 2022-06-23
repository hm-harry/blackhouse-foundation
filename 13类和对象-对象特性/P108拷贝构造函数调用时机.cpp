#include<iostream>
#include<iostream>
#include<string>
using namespace std;
// C++中拷贝构造函数调用时机通常有三种情况

// * 使用一个已经创建完毕的对象来初始化一个新对象
// * 值传递的方式给函数参数传值
// * 以值方式返回局部对象
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

void doWork(Person p1) {}
void test02() {
	Person p; //无参构造函数
	doWork(p);
}

Person doWork2()
{
	Person p1;
	cout << &p1 << endl;
	return p1;
}

void test03()
{
	Person p = doWork2();
	cout << &p << endl;
}
int main(){
    test02();

    system("pause");
    return 0;
}
