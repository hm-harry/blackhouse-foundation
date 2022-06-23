#include<iostream>
#include<string>
using namespace std;
// P67

struct Student
{
    string name;
    int age;
    int score;
};

struct Teacher
{
    int id;
    string name;
    int age;
    Student stu;
};

int main(){
    Teacher t;
    t.id = 10000;
    t.name = "wang";
    t.age = 50;
    t.stu.name = "wang";
    t.stu.age = 20;
    t.stu.score = 60;
    cout << t.id << " " << t.name << " " << t.age << " " << t.stu.name << " " << t.stu.age << " " << t.stu.score << endl;

    system("pause");
    return 0;
}
