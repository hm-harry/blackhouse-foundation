#include<iostream>
#include<string>
using namespace std;
class AbstractDrinking{
public:
    virtual void Boil() = 0;
    virtual void Brew() = 0;
    virtual void PourInCup() = 0;
    virtual void PutSomething() = 0;

    void makeDrink(){
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};

class Coffee: public AbstractDrinking{
public:
    virtual void Boil(){
        cout << "coffee Boil" << endl;
    }
    virtual void Brew(){
        cout << "coffee Brew" << endl;
    }
    virtual void PourInCup(){
        cout << "coffee PourInCup" << endl;
    }
    virtual void PutSomething(){
        cout << "coffee PutSomething" << endl;
    }
};

class Tea: public AbstractDrinking{
public:
    virtual void Boil(){
        cout << "Tea Boil" << endl;
    }
    virtual void Brew(){
        cout << "Tea Brew" << endl;
    }
    virtual void PourInCup(){
        cout << "Tea PourInCup" << endl;
    }
    virtual void PutSomething(){
        cout << "Tea PutSomething" << endl;
    }
};

void doWorking(AbstractDrinking *abstractDrinking){
    abstractDrinking->makeDrink();
    delete abstractDrinking;
}

void test01(){
    Coffee coffee;

    doWorking(&coffee);
    doWorking(new Tea);
}

int main(){
    test01();

    system("pause");
    return 0;
}
