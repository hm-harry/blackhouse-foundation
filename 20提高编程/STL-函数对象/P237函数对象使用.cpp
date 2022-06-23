#include<iostream>
#include<string>
using namespace std;
// 函数对象（仿函数）
class Myadd{
public:
    int operator()(int v1, int v2){
        return v1 + v2;
    }
};

class Myprint{
public:
    Myprint(){
        this->count = 0;
    }
    Myprint(string s){
        this->count = 0;
        cout << s << endl;
    }
    void operator()(string test){
        cout << test << endl;
        this->count++;
    }

    int count;
};

void test01(){
    Myadd myadd;
    cout << myadd(10, 10) << endl;
}

void test02(){
    Myprint myprint("a");
    myprint("hello");
    myprint("hello");
    myprint("hello");
    cout << "count = " << myprint.count << endl;
}

void doPrint(Myprint &mp, string test){
    mp(test);
}

void test03(){
    Myprint myprint;
    doPrint(myprint, "hello word");
}

int main(){
    test03();

    system("pause");
    return 0;
}
