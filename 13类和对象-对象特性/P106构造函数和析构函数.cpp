#include<iostream>
#include<iostream>
#include<string>
using namespace std;
class Person{
public:
//构造函数
    Person(){
        cout << "Person function" << endl;
    }
//析构函数
    ~Person()
	{
		cout << "~Person function" << endl;
	}
};

void test01()
{
	Person p;
}

int main(){
    test01();
    Person p;

    system("pause");
    return 0;
}
