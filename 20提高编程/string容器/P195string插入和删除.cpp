#include<iostream>
#include<string>
using namespace std;

// * `string& insert(int pos, const char* s);  `                //插入字符串
// * `string& insert(int pos, const string& str); `        //插入字符串
// * `string& insert(int pos, int n, char c);`                //在指定位置插入n个字符c
// * `string& erase(int pos, int n = npos);`                    //删除从Pos开始的n个字符 

void test01(){
    string str = "hello";
    str.insert(1, "111");

    cout << "str = " << str << endl;

    str.erase(1, 1);
    cout << "str = " << str << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
