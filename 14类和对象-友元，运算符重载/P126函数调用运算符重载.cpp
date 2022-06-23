#include<iostream>
#include<iostream>
#include<string>
using namespace std;
class MyPrint{
public:
    void operator()(string test){
        cout << test << endl;
    }
};

class MyAdd{
public:
    int operator()(int num1, int num2){
        return num1 + num2;
    }
};

void MyPrint02(string test){
    cout << test << endl;
}

void test01(){
    MyPrint myprint;
    myprint("hello world");
    MyPrint02("hello world");

    MyAdd add;
    int result = add(100,100);
    cout << "100 + 100 = " << result << endl;
    cout << "100 + 100 = " << MyAdd()(100,100) << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
