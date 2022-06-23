#include<iostream>
#include<string>
#include<ctime>
using namespace std;
// P71

struct Hero
{
    string hName;
    int age;
    string gender;
};

void bubbleSort(Hero hArray[], int len){
    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < len - i - 1; j++){
            if(hArray[j + 1].age < hArray[j].age){
                struct Hero temp = hArray[j + 1];
                hArray[j + 1] = hArray[j];
                hArray[j] = temp;
            }
        }
    }
}

void printHero(Hero hArray[], int len){
    for(int i = 0; i < len; i++){
        cout << hArray[i].hName << " " << hArray[i].age << " " << hArray[i].gender << endl;
    }
}

int main(){
    Hero hArray[5] = {{"liu",23,"male"}, {"guan", 22, "male"}, {"zhang", 20, "male"}, {"zhao", 21, "male"}, {"diao", 19, "female"}};
    int len = sizeof(hArray) / sizeof(hArray[0]);
    cout << "after" << endl;
    printHero(hArray, len);
    
    cout << "after" << endl;
    bubbleSort(hArray, len);
    printHero(hArray, len);

    // for(int i = 0; i < len; i++){
    //     cout << hArray[i].hName << " " << hArray[i].age << " " << hArray[i].gender << endl;
    // }
    // cout << t.id << " " << t.name << " " << t.age << " " << t.stu.name << " " << t.stu.age << " " << t.stu.score << endl;

    system("pause");
    return 0;
}