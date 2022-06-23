#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<string>
#include<deque>
#include<algorithm>
#include<ctime>
#include<numeric>
#include<fstream>
#include"speaker.hpp"

class SpeechManager{
public:
    SpeechManager();

    ~SpeechManager();

    void show_Menu();

    void exitSystem();

    void initSpeech();

    void createSpeaker();

    void startSpeech();

    void speechDraw();

    void speechContest();

    void showScore();

    void saveRecord();

    void loadRecord();

    void showRecord();

    void clearRecord();

    vector<int> v1;
    vector<int> v2;
    vector<int> vVictor;
    map<int, Speaker> m_Speaker;

    int m_Index;

    bool fileIsEmpty;

    map<int, vector<string>> m_Record;//存放往届记录的容器
};

SpeechManager::SpeechManager(){
    this->initSpeech();
    this->createSpeaker();
    this->loadRecord();
}

SpeechManager::~SpeechManager(){

}

void SpeechManager::show_Menu(){
    cout << "**************************************" << endl;
	cout << "*************  welcome ***************" << endl;
	cout << "*************  1.begin  *************" << endl;
	cout << "*************  2.check  *************" << endl;
	cout << "*************  3.clear  *************" << endl;
	cout << "*************  0.finish  ************" << endl;
	cout << "*************************************" << endl;
	cout << endl;
}

void SpeechManager::exitSystem(){
    cout << "see you" << endl;
    system("pause");
    exit(0);
}

void SpeechManager::initSpeech(){
    this->v1.clear();
    this->v2.clear();
    this->vVictor.clear();
    this->m_Speaker.clear();

    m_Index = 1;
}

void SpeechManager::createSpeaker(){
    string nameSeed = "ABCDEFGHIJKL";
    for(int i = 0; i < nameSeed.size(); i++){
        string name = "player:";
        name += nameSeed[i];

        Speaker sp;
        sp.m_Name = name;

        for(int j = 0; j < 2; j++){
            sp.m_Score[j] = 0;
        }

        this->v1.push_back(i + 10001);

        this->m_Speaker.insert(make_pair(i + 10001, sp));
    }
}

void SpeechManager::startSpeech(){
    //第一轮比赛
	//1、抽签
    this->speechDraw();
	//2、比赛
    this->speechContest();
	//3、显示晋级结果
    this->showScore();
	//第二轮比赛
    this->m_Index++;
	//1、抽签
    this->speechDraw();
	//2、比赛
    this->speechContest();
	//3、显示最终结果
    this->showScore();
	//4、保存分数
    this->saveRecord();
    // 读入缓冲区
    this->initSpeech();
    this->createSpeaker();
    this->loadRecord();

    cout << "game over!" << endl;
    system("pause");
    system("cls");
}

void SpeechManager::speechDraw(){
    srand((unsigned int)time(NULL));
    cout << "the " << this->m_Index << " draw begin" << endl;
    cout << "---------------------------" << endl;
    if(this->m_Index == 1){
        random_shuffle(v1.begin(), v1.end());
        for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }else{
        random_shuffle(v2.begin(), v2.end());
        for(vector<int>::iterator it = v2.begin(); it != v2.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }
    cout << "---------------------------" << endl;
    system("pause");
}

void SpeechManager::speechContest(){
    srand((unsigned int)time(NULL));
    cout << "the " << this->m_Index << " begin" << endl;

    multimap<double, int, greater<double>> groupScore;

    int num = 0;

    vector<int> v_Src;
    if(this->m_Index == 1){
        v_Src = v1;
    }else{
        v_Src = v2;
    }

    for(vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++){
        deque<double> d;
        for(int i = 0; i < 10; i++){
            double score = (rand() % 401 + 600) / 10.f;
            // cout << score << " ";
            d.push_back(score);
        }
        // cout << endl;

        sort(d.begin(), d.end(), greater<double>());
        d.pop_front();
        d.pop_back();

        double sum = accumulate(d.begin(), d.end(), 0.0f);
        double avg = sum / (double)d.size();

        this->m_Speaker.at(*it).m_Score[this->m_Index - 1] = avg;

        groupScore.insert(make_pair(avg, *it));//相当于进行排序
        num++;
        if(num % 6 == 0){
            cout << "the " << num / 6 << " group result" << endl;
            for(multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++){
                cout << "num: " << (*it).second << " " << "name: " << this->m_Speaker[(*it).second].m_Name << " " << "score: " << (*it).first << endl;
            }
            int count = 0;
            for(multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end() && count < 3; it++, count++){
                if(this->m_Index == 1){
                    this->v2.push_back(it->second);
                }else{
                    this->vVictor.push_back(it->second);
                }
            }
            cout << endl;
            groupScore.clear();
        }
    }
    cout << "------------------finish------------------" << endl;

    system("pause");
}

void SpeechManager::showScore(){
    cout << "the " << this->m_Index << " result:" << endl;
    vector<int> vshow;
    if (this->m_Index == 1)
    {
        vshow = this->v2;
    }else{
        vshow = this->vVictor;
    }
    for(vector<int>::iterator it = vshow.begin(); it != vshow.end(); it++){
        cout << "number: " << *it << "name: " << m_Speaker[(*it)].m_Name << " " << "score: " << m_Speaker[(*it)].m_Score[m_Index - 1] << endl;
    }
    
    system("pause");
	system("cls");
	this->show_Menu(); 
}

void SpeechManager::saveRecord(){
    ofstream ofs;
    ofs.open("speech.csv", ios::app | ios::out);//用追加的方式写
    for(vector<int>::iterator it = vVictor.begin(); it != vVictor.end(); it++){
        ofs << (*it) << "," << m_Speaker[(*it)].m_Score[1] << ",";
    }
    ofs << endl;
    ofs.close();

    cout << "record finishing" << endl;

}

void SpeechManager::loadRecord(){
    ifstream ifs;
    ifs.open("speech.csv", ios::in);
    if(!ifs.is_open()){
        this->fileIsEmpty = true;
        cout << "no file" << endl;
        ifs.close();
        return;
    }
    char ch;
    ifs >> ch;
    if(ifs.eof()){
        cout << "file is empty" << endl;
        this->fileIsEmpty = true;
        ifs.close();
        return;
    }

    this->fileIsEmpty = false;
    ifs.putback(ch);

    string data;
    int index = 1;
    while(ifs >> data){
        // cout << data << endl;
        vector<string> v;
        int pos = -1;//查到逗号位置
        int start = 0;

        while(true){
            pos = data.find(",", start);
            if(pos == -1){
               break;
            }
            string temp = data.substr(start, pos - start);
            // cout << temp << endl;
            v.push_back(temp);
            start = pos + 1;
        }
        this->m_Record.insert(make_pair(index++, v));
    }
    // for(map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++){
    //     cout << it->first << " first num: " << it->second[0] << " " << "score: " << it->second[1] << endl;
    // }
    ifs.close();
}

void SpeechManager::showRecord(){
    if(this->fileIsEmpty){
        cout << "no file or no record" << endl;
    }
    for(map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++){
        cout << it->first << " first num: " << it->second[0] << " " << "score: " << it->second[1] << endl;
        cout << " " << " second num: " << it->second[2] << " " << "score: " << it->second[3] << endl;
        cout << " " << " third num: " << it->second[4] << " " << "score: " << it->second[5] << endl;
    }
    system("pause");
    system("cls");
}

void SpeechManager::clearRecord(){
    cout << "are you sure to clear? 1.yes 2.no" << endl;
    int select = 2;
    cin >> select;
    if(select == 1){
        ofstream ofs("speech.csv", ios::trunc);
        ofs.close();
        // 重新初始化
        this->initSpeech();
        this->createSpeaker();
        m_Record.clear();
        this->loadRecord();

        cout << "clear successfully" << endl;
    }
    system("pause");
    system("cls");
}