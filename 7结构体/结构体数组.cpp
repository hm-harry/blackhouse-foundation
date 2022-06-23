#include<iostream>
#include<string>
using namespace std;
// P65
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
    stuArray[2].name = "zhaoliu";
    stuArray[2].age = 80;
    stuArray[2].score = 60;
    
    for(int i = 0; i < 3; i++){
        cout << stuArray[i].name << " " << stuArray[i].age << " " << stuArray[i].score << endl;
    }

    system("pause");
    return 0;
}
