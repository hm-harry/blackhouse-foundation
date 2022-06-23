#include<iostream>
#include<string>
using namespace std;
#include<vector>
#include<map>
#include<ctime>

// * 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
// * 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
// * 随机给10名员工分配部门和工资
// * 通过multimap进行信息的插入  key(部门编号) value(员工)
// * 分部门显示员工信息
#define cehua 0
#define meishu 1
#define yanfa 2

class Worker{
public:
    string m_Name;
    int m_Salary;
};

void createWorker(vector<Worker> &v){
    string nameSeed = "ABCDEFGHIJ";
    for(int i = 0; i < 10; i++){
        Worker Worker;
        Worker.m_Name = "worker";
        Worker.m_Name += nameSeed[i];

        Worker.m_Salary = rand() % 10000 + 10000;
        v.push_back(Worker);
    }
}

multimap<int,Worker> setGroup(const vector<Worker> &v){
    multimap<int, Worker> mWorker;
    for(vector<Worker>::const_iterator it = v.begin(); it != v.end(); it++){
        int depId = rand() % 3;
        mWorker.insert(pair<int, Worker>(depId, *it));
    }
    return mWorker;
}

void showWorkerByGroup(multimap<int, Worker> &m){
    cout << "cehua:" << endl;
    multimap<int, Worker>::iterator pos = m.find(cehua);

    int count = m.count(cehua);
    cout << "cehua" << endl;
    for(int index = 0; pos != m.end(), index < count; pos++, index++){
        cout << "name: " << (*pos).second.m_Name << " Salary: " << (*pos).second.m_Salary << endl;
    }

    pos = m.find(meishu);

    count = m.count(meishu);
    cout << "meishu" << endl;
    for(int index = 0; pos != m.end(), index < count; pos++, index++){
        cout << "name: " << (*pos).second.m_Name << " Salary: " << (*pos).second.m_Salary << endl;
    }

    pos = m.find(yanfa);

    count = m.count(yanfa);
    cout << "yanfa" << endl;
    for(int index = 0; pos != m.end(), index < count; pos++, index++){
        cout << "name: " << (*pos).second.m_Name << " Salary: " << (*pos).second.m_Salary << endl;
    }

    // for(int index = 0; index < count; index++){
    //     cout << "name: " << (*pos).second.m_Name << " Salary: " << (*pos).second.m_Salary << endl;
    //     pos++;
    // }
}

void test01(){
    vector<Worker> vWorker;
    createWorker(vWorker);
    // for(vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++){
    //     cout << "name: " << (*it).m_Name << " Salary: " << (*it).m_Salary << endl;
    // }
    multimap<int, Worker> mWorker;
    mWorker = setGroup(vWorker);

    showWorkerByGroup(mWorker);
}

int main(){
    srand((unsigned int)time(NULL));
    test01();

    system("pause");
    return 0;
}
