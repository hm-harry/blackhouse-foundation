#include<iostream>
#include<iostream>
#include<string>
using namespace std;
class Person{
public:
    void showclassName(){
        cout << "showclassName()" << endl;
    }
    void showPersonAge(){
        if (this == NULL) {
			return;
		}
        cout << "age = " << age << endl;
    }
    int age;
};

void test01(){
    Person *p = NULL;

    p->showclassName();
    p->showPersonAge();
}
int main(){
    test01();

    system("pause");
    return 0;
}
