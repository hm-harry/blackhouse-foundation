#include<iostream>
using namespace std;

void c01(){
    int score = 0;
    cout << "input score:" << endl;
    cin >> score;
    cout << "score = " << score << endl;

    if (score > 600){
      cout << "one" << endl;
    }
    else if (score > 500){
        cout << "two" << endl;
    }else if (score > 400){
        cout << "three" << endl;
    }else{
        cout << "failed" << endl;
    }
}