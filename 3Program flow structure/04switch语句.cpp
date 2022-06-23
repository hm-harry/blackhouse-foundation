#include<iostream>
using namespace std;

int main(){
    // switch语句
    // 只能判断整型和字符型
    cout << "input score:" << endl;

    int score = 0;
    cin >> score;
    cout << "score = " << score << endl;

    switch (score)
    {
    case 10:
        cout << "clasic" << endl;
        break;
    case 9:
        cout << "clasic" << endl;
        break;
    case 8:
        cout << "great" << endl;
        break;
    case 7:
        cout << "great" << endl;
        break;
    case 6:
        cout << "common" << endl;
        break;
    case 5:
        cout << "common" << endl;
        break;
    default:
        cout << "bad" << endl;
        break;
    }
    system("pause");
    return 0;
}