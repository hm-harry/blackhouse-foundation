#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void test01(){
    ofstream ofs;
    char str[] = "test";
    ofs.open("test.txt", ios::out);

    ofs.write(str, sizeof(str));
    ofs << endl;
    ofs << "name:zhangsan" << endl;
    ofs << "genter:male" << endl;
    ofs << "age:18" << endl;

    ofs.close();
}

int main(){
    test01();

    system("pause");
    return 0;
}
