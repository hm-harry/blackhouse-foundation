#include<iostream>
#include<string>
using namespace std;
// P66
struct Student
{
    string name;
    int age;
    int score;
};

int main(){
    Student stuArray[3] = {
        {"zhangsan", 18, 100},
        {"lisi", 19, 80},
        {"wangwu", 20, 60},
    };
    Student *p = stuArray;
    
    for(int i = 0; i < 3; i++){
        cout << (p+i)->name << " " << (p+i)->age << " " << (p+i)->score << endl;
    }

    system("pause");
    return 0;
}
