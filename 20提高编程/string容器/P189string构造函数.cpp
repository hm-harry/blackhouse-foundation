#include<iostream>
#include<string>
using namespace std;
// * char * 是一个指针
// * string是一个类，类内部封装了char\*，管理这个字符串，是一个char*型的容器。

// * `string();`          				//创建一个空的字符串 例如: string str;
//   `string(const char* s);`	        //使用字符串s初始化
// * `string(const string& str);`    //使用一个string对象初始化另一个string对象
// * `string(int n, char c);`           //使用n个字符c初始化 

void test01(){
    string s1;
    cout << "str1 = " << s1 << endl;

    const char *str = "hello world";
    string s2(str);
    cout << "str2 = " << s2 << endl;

    string s3(s2);
    cout << "str3 = " << s3 << endl;

    string s4(10, 'a');
    cout << "str4 = " << s4 << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
