#include<iostream>
#include<string>
using namespace std;
// P64
struct Student
{
    string name;
    int age;
    int score;
};

int main(){
    Student s1;
    s1.name = "zhangsan";
    s1.age = 18;
    s1.score = 100;
    cout << s1.name << " " << s1.age << " " << s1.score << endl;

    struct Student s2 = {"lisi", 19, 80};
    cout << s2.name << " " << s2.age << " " << s2.score << endl;

    system("pause");
    return 0;
}
