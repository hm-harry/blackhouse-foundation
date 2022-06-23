#include<iostream>
#include<string>
using namespace std;
class Animal{
public:
    Animal(){
        cout << "Animal()" << endl;
    }

    //析构函数加上virtual关键字，变成虚析构函数,解决父类指针释放子类对象时不干净的问题
    // virtual ~Animal(){
    //     cout << "~Animal()" << endl;
    // }
    virtual ~Animal() = 0;
    virtual void speak() = 0;
};

Animal::~Animal(){
    cout << "~Animal()" << endl;
}


class Cat: public Animal{
public:
    Cat(string name){
        cout << "Cat(string name)" << endl;
        m_Name = new string(name);
    }

    virtual void speak(){
        cout << *m_Name << " cat speak" << endl;
    }

    ~Cat(){
        if(m_Name != NULL){
            cout << "~Cat()" << endl;
            delete m_Name;
            m_Name = NULL;
        }
    }

    string *m_Name;
};

void test01(){
    Animal *animal = new Cat("Tom");
    animal->speak();
    delete animal;
}

int main(){
    test01();

    system("pause");
    return 0;
}
