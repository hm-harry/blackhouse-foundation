#include<iostream>
#include<iostream>
#include<string>
using namespace std;
// 深浅拷贝是面试经典问题，也是常见的一个坑

// 浅拷贝：简单的赋值拷贝操作

// 深拷贝：在堆区重新申请空间，进行拷贝操作
class Person{
public:
//构造函数
    Person(){
        cout << "Person function" << endl;
    }
    Person(int a, int h){
        age = a;
        height = new int(h);
        cout << "Person(int a) function" << endl;
    }

    Person(const Person& p) {
		cout << "Person(const Person& p): " << endl;
		//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
		age = p.age;
		height = new int(*p.height);
		
	}
//析构函数
    ~Person()
	{
        if (height != NULL)
		{
			delete height;
		}
		cout << "~Person function" << endl;
	}
    int getage(){
        return age;
    }
    int getheight(){
        return *height;
    }
private:
    int age;
    int *height;
};

void test01()
{
	Person p1(18, 180);

	cout << "p1.getage():  " << p1.getage() << " " << "p1.getheight():  " << p1.getheight() << endl;

    Person p2(p1);

	cout << "p2.getage():  " << p2.getage() << " " << "p2.getheight():  " << p2.getheight() << endl;
}


int main(){
    test01();

    system("pause");
    return 0;
}
