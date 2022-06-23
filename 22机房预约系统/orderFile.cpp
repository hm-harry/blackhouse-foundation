#include"orderFile.h"

OrderFile::OrderFile(){
    ifstream ifs;
    ifs.open(ORDER_FILE, ios::in);
    if(!ifs.is_open()){
        cout << "no file" << endl;
        ifs.close();
        return;
    }
    string data;
    string interval;
    string stuId;
    string stuName;
    string roomId;
    string status;

    this->m_Size = 0;
    while(ifs >> data && ifs >> interval && ifs >> stuId && ifs >> stuName && ifs >> roomId && ifs >> status){
        map<string, string> m;
        m.insert(find(data));
        m.insert(find(interval));
        m.insert(find(stuId));
        m.insert(find(stuName));
        m.insert(find(roomId));
        m.insert(find(status));
        m_orderData.insert(make_pair(this->m_Size, m));
        this->m_Size++;
    }
    ifs.close();
    // ≤‚ ‘¥˙¬Î
    // for(map<int, map<string, string>>::iterator it = m_orderData.begin(); it != m_orderData.end(); it++){
    //     cout << it->first << endl;
    //     for(map<string, string>::iterator it2 = it->second.begin(); it2 != it->second.end(); it2++){
    //         cout << it2->first << it2->second << " ";
    //     }
    //     cout << endl;
    // }
    // system("pause");
}

int OrderFile::getSize(){
    return this->m_Size;
}

map<int, map<string, string>> OrderFile::getOrderData(){
    return this->m_orderData;
}

void OrderFile::updateOrder(map<int, map<string, string>> tmp){
    if(this->m_Size == 0){
        return;
    }
    ofstream ofs;
    ofs.open(ORDER_FILE, ios::out | ios::trunc);
    for(int i = 0; i < m_Size; i++){
        ofs << "date:" << tmp[i]["date"] << " ";
        ofs << "interval:" << tmp[i]["interval"] << " ";
        ofs << "stuId:" << tmp[i]["stuId"] << " ";
        ofs << "stuName:" << tmp[i]["stuName"] << " ";
		ofs << "roomId:" << tmp[i]["roomId"] << " ";
		ofs << "status:" << tmp[i]["status"] << endl;
    }
    ofs.close();
}

pair<string, string> find(string s){
    string key = "";
    string value = "";
    int pos = s.find(":");
    if(pos != -1){
        key = s.substr(0, pos);
        value = s.substr(pos + 1, s.size() - 1);
        
    }
    pair<string,string> result(key, value);
    return result;
}