#include<iostream>
using namespace std;
#include"speechManager.hpp"

int main(){
    SpeechManager sm;
    int choice = 1;

    // for(map<int,Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++){
    //     cout << it->first << " " << it->second.m_Name << " " << it->second.m_Score[0] << endl;
    // }

    while (choice)
    {
        sm.show_Menu();
        cout << "please input your choice: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1://开始比赛
            sm.startSpeech();
            break;
        case 2://查看记录
            sm.showRecord();
            break;
        case 3://清空记录
            sm.clearRecord();
            break;
        case 0://退出系统
            sm.exitSystem();
            break;
        default:
            cout << "input wrong" << endl;
            system("pause");
            system("cls");
            break;
        };
    }
    
    system("pause");
    return 0;
}