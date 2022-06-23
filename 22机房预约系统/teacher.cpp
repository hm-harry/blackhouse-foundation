#include"teacher.h"

Teacher::Teacher(){

}

Teacher::Teacher(int empId, string name, string pwd){
    this->empId = empId;
    this->m_Name = name;
    this->m_Pwd = pwd;
}

void Teacher::operMenu(){
    cout << "welcome teacher: " << this->m_Name << " login!" << endl;
	cout << "\t\t -----------------------------------\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          1.check all order       |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          2.change order          |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          0.exit                  |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t ----------------------------------\n";
	cout << "please input your choice: " << endl;
}

void Teacher::showAllOrder(){
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

void Teacher::validOrder(){
    OrderFile of;
    if(of.getSize() == 0){
        cout << "no record" << endl;
        system("pause");
        system("cls");
        return;
    }
    map<int,map<string,string>> find = of.getOrderData();
    vector<int> v;
    int index = 0;
    cout << "the order you need to check:" << endl;
    for(int i = 0; i < of.getSize(); i++){
        if(find[i]["status"] == "1"){
            v.push_back(i);
            cout << ++index << ": ";
            cout << "data: " << find[i]["data"];
            cout << " interval: " << (find[i]["interval"] == "1" ? "morning" : "afternoon");
            cout << " student id: " << find[i]["stuId"];
            cout << " student name: " << find[i]["stuName"];
            cout << " computerID: " << find[i]["roomId"];
            string status = "waiting for checking...";
            cout << status << endl;
        }
    }
    cout << "please input which one do you want to check: " << endl;
    int select = 0;
    int ret = 0;
    while(true){
        cin >> select;
        if(select > 0 && select <= index){
            cout << "the result of checking (1.pass 2.unpass)" << endl;
            cin >> ret;
            if(ret == 1){
                find[v[select - 1]]["status"] = "2";
            }else{
                find[v[select - 1]]["status"] = "-1";
            }
            of.updateOrder(find);
            cout << "successfully check" << endl;
            break;
        }else{
            cout << "input error!" << endl;
            break;
        }
    }
    system("pause");
    system("cls");
}

void Teacher::inputId(int id){
    this->empId = id;
}

int Teacher::outputId(){
    return this->empId;
}

string Teacher::showName(){
    return this->m_Name;
}

string Teacher::showPwd(){
    return this->m_Pwd;
}

void Teacher::teacherMenu(Identity* &teacher){
    while(true){
        char sure = 'N';
        this->operMenu();
        Teacher* tea = (Teacher*)teacher;
        int select = 0;
        cin >> select;
        if(select == 1){
            showAllOrder();
        }else if(select == 2){
            validOrder();
        }else{
            cout << "are you sure to exit? Y/N" << endl;
            cin >> sure;
            if(sure == 'Y'){
                delete tea;
                cout << "see you!" << endl;
                break;
            }else if(sure == 'N'){
                system("pause");
                system("cls");
            }else{
                cout << "input error! please input again:" << endl;
                system("pause");
                system("cls");
            }
        }
    }
}