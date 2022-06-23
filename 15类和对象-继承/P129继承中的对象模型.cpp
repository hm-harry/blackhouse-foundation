#include<iostream>
#include<iostream>
#include<string>
using namespace std;
// 继承中的对象模型
class Base{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; //私有成员只是被隐藏了，但是还是会继承下去
};

class Son :public Base
{
public:
	int m_D;
};

void test01()
{
	cout << "sizeof Son = " << sizeof(Son) << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
