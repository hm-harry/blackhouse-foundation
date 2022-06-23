#include<iostream>
#include<string>
using namespace std;
// P68

struct Student
{
    string name;
    int age;
    int score;
};

void printStudent1(Student s){
    s.age = 100;
    cout << s.name << " " << s.age << " " << s.score << endl;
}

void printStudent2(Student *s){
    cout << s->name << " " << s->age << " " << s->score << endl;
}

int main(){
    Student s;
    s.name = "san";
    s.age = 20;
    s.score = 85;

    printStudent1(s);
    printStudent2(&s);
    // cout << s.name << " " << s.age << " " << s.score << endl;

    system("pause");
    return 0;
}
