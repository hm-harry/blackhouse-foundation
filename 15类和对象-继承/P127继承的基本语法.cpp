#include<iostream>
#include<iostream>
#include<string>
using namespace std;

// 继承的好处：==可以减少重复的代码==

// class A : public B; 

// A 类称为子类 或 派生类

// B 类称为父类 或 基类


// class Java{
// public:
//     void header(){
//         cout << "head:" << endl;
//     }
//     void footer(){
//         cout << "footer:" << endl;
//     }
//     void left(){
//         cout << "left:" << endl;
//     }
//     void content(){
//         cout << "java:" << endl;
//     }
// };

// class python{
// public:
//     void header(){
//         cout << "head:" << endl;
//     }
//     void footer(){
//         cout << "footer:" << endl;
//     }
//     void left(){
//         cout << "left:" << endl;
//     }
//     void content(){
//         cout << "python:" << endl;
//     }
// };

// class Cpp{
// public:
//     void header(){
//         cout << "head:" << endl;
//     }
//     void footer(){
//         cout << "footer:" << endl;
//     }
//     void left(){
//         cout << "left:" << endl;
//     }
//     void content(){
//         cout << "cpp:" << endl;
//     }
// };

class Basepage{
public:
    void header(){
        cout << "head:" << endl;
    }
    void footer(){
        cout << "footer:" << endl;
    }
    void left(){
        cout << "left:" << endl;
    }
};

class Java: public Basepage{
public:
    void content(){
        cout << "java:" << endl;
    }
};

class python: public Basepage{
public:
    void content(){
        cout << "python:" << endl;
    }
};

class Cpp: public Basepage{
public:
    void content(){
        cout << "Cpp:" << endl;
    }
};

void test01(){
    cout << "java" << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    cout << "---------------------------------" << endl;

    cout << "cpp" << endl;
    Cpp c;
    c.header();
    c.footer();
    c.left();
    c.content();
    cout << "---------------------------------" << endl;

    cout << "python" << endl;
    python py;
    py.header();
    py.footer();
    py.left();
    py.content();
    cout << "---------------------------------" << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
