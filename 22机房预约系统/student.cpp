#include"student.h"

Student::Student(){
    
}

Student::Student(int id, string name, string pwd){
    this->m_id = id;
    this->m_Name = name;
    this->m_Pwd = pwd;

    ifstream ifs;
    ifs.open(COMPUTER_FILE, ios::in);
    if(!ifs.is_open()){
        cout << "no file" << endl;
        ifs.close();
        return;
    }
    ComputerRoom com;
    while(ifs >> com.m_ComId && ifs >> com.m_MaxNum){
        vCom.push_back(com);
    }
    ifs.close();
}

void Student::operMenu(){
    cout << "welcome student:" << this->m_Name << " load in!" << endl;
	cout << "\t\t ----------------------------------\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|       1.apply appointment       |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|       2.check my appointment    |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|       3.check all appointment   |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|       4.delete my appointment   |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|       0.exit                    |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t ----------------------------------\n";
	cout << "please input your choice: " << endl;
}

void Student::applyOrder(){
    double data = -1;
    double interval = -1;
    double room = -1;
    while(true){
        cout << "opening time is from Monday to Friday" << endl;
        cout << "please input which day do you want to apply(1-5):" << endl;
        cin >> data;
        if(data != 1 && data != 2 && data != 3 && data != 4 && data != 5){
            cout << "input error please try again" << endl;
            continue;
        }
        
        cout << "please input which time do you want to apply(1.morning 2.afternoon):" << endl;
        cin >> interval;
        if(interval != 1 && interval != 2){
            cout << "input error please try again" << endl;
            continue;
        }

        cout << "please input which room do you want to apply(1/2/3):" << endl;
        for(int i = 0; i < vCom.size(); i++){
            cout << "id: " << vCom[i].m_ComId << " capiture: " << vCom[i].m_MaxNum << endl;
        }
        cin >> room;
        if(room != 1 && room != 2 && room != 3){
            cout << "input error please try again" << endl;
            continue;
        }
        break;
    }
    cout << "apply successfully, waiting for check..." << endl;
    ofstream ofs;
    ofs.open(ORDER_FILE, ios::app);
    ofs << "data:" << data << " " << "interval:" << interval << " " << "stuId:" << this->outputId() << " " << "stuName:" << this->showName() << " " 
    << "room:" << room << " " << "status:" << 1 << endl;
    ofs.close();
    system("pause");
    system("cls");
}

void Student::showMyOrder(){
    OrderFile* of = new OrderFile();
    if(of->getSize() == 0){
        cout << "no record" << endl;
        system("pause");
        system("cls");
    }
    map<int,map<string,string>> find = of->getOrderData();
    for(int i = 0; i < of->getSize(); i++){
        if(this->m_id == atoi(find[i]["stuId"].c_str())){
            cout << "data: " << find[i]["data"];
            cout << " interval: " << (find[i]["interval"] == "1" ? "morning" : "afternoon");
            cout << " computerID: " << find[i]["roomId"];
            string status = "static: ";
            if(find[i]["status"] == "1"){
                status += "waiting for checking...";
            }else if(find[i]["status"] == "2"){
                status += "successfully ordering";
            }else if(find[i]["status"] == "-1"){
                status += "fail to order";
            }else{
                status += "order is cancelled";
            }
            cout << status << endl;
        }
    }
    system("pause");
    system("cls");
}

void Student::showAllOrder(){
    OrderFile* of = new OrderFile();
    if(of->getSize() == 0){
        cout << "no record" << endl;
        system("pause");
        system("cls");
    }
    map<int,map<string,string>> find = of->getOrderData();
    for(int i = 0; i < of->getSize(); i++){
        cout << i + 1 << ": ";
        cout << "data: " << find[i]["data"];
        cout << " interval: " << (find[i]["interval"] == "1" ? "morning" : "afternoon");
        cout << " computerID: " << find[i]["roomId"];
        string status = "static: ";
        if(find[i]["status"] == "1"){
            status += "waiting for checking...";
        }else if(find[i]["status"] == "2"){
            status += "successfully ordering";
        }else if(find[i]["status"] == "-1"){
            status += "fail to order";
        }else{
            status += "order is cancelled";
        }
        cout << status << endl;
    }
    system("pause");
    system("cls");
}

void Student::cancelOrder(){
    OrderFile* of = new OrderFile();
    if(of->getSize() == 0){
        cout << "no record" << endl;
        system("pause");
        system("cls");
        return;
    }
    map<int,map<string,string>> find = of->getOrderData();
    vector<int> v = {};
    for(int i = 0; i < of->getSize(); i++){
        if(this->m_id == atoi(find[i]["stuId"].c_str()) && (find[i]["status"] == "1" || find[i]["status"] == "2")){
            v.push_back(i);
            cout << v.size() << " ";
            cout << "data: " << find[i]["data"];
            cout << " interval: " << (find[i]["interval"] == "1" ? "morning" : "afternoon");
            cout << " computerID: " << find[i]["roomId"];
            string status = "static: ";
            if(find[i]["status"] == "1"){
                status += "waiting for checking...";
            }else if(find[i]["status"] == "2"){
                status += "successfully ordering";
            }
            cout << status << endl;
        }
    }
    cout << "please input which check do you want to cancel: (input 0 to cancel)" << endl;
    int select = 0;
    while(true){
        cin >> select;
        if(select > 0 && select <= v.size()){
            int index = v[select - 1];
            find[index]["status"] = "0";
            of->updateOrder(find);
            break;
        }else{
            cout << "input error!" << endl;
            break;
        }
    }
    system("pause");
    system("cls");
}

void Student::inputId(int id){
    this->m_id = id;
}

int Student::outputId(){
    return this->m_id;
}

string Student::showName(){
    return this->m_Name;
}

string Student::showPwd(){
    return this->m_Pwd;
}

void Student::studentMenu(Identity* &student){
    while(true){
        Student* stu = dynamic_cast<Student*>(student);
        stu->operMenu();
        int select = -1;
        char sure = 'N';
        cin >> select;
        switch (select)
        {
        case 1://申请预约
            stu->applyOrder();
            break;
        case 2://查看自身预约
            stu->showMyOrder();
            break;
        case 3://查看所有人预约
            stu->showAllOrder();
            break;
        case 4://取消预约
            stu->cancelOrder();
            break;
        case 0:
            cout << "are you sure to exit? Y/N" << endl;
            cin >> sure;
            if(sure == 'Y'){
                delete stu;
                cout << "see you!" << endl;
                return;
            }else if(sure == 'N'){
                break;
            }else{
                cout << "input error! please input again:" << endl;
                system("pause");
                system("cls");
                break;
            }
            break;
        default:
            cout << "input error! please input again:" << endl;
            system("cls");
            break;
        }
    }
}
