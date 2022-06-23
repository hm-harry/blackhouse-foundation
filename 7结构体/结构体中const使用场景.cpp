#include<iostream>
#include<string>
using namespace std;
// P69
struct Student
{
    string name;
    int age;
    int score;
};

void printStudent(const Student *s){
    // s->name = 100;//加入const之后，一旦有修改操作就会报错，可以防止我们误操作
    cout << s->name << " " << s->age << " " << s->score << endl;
}

int main(){
    Student s = {"zhangsan", 18, 100};
    printStudent(&s);

    system("pause");
    return 0;
}
