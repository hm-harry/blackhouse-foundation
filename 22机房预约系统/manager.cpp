#include"manager.h"

Manager::Manager(){

}

Manager::Manager(string name, string pwd){
    this->m_Name = name;
    this->m_Pwd = pwd;
}

void Manager::operMenu(){
    cout << "welcome Manager "<< this->m_Name << " load in:" << endl;
	cout << "\t\t ---------------------------------\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          1.addaccount          |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          2.checkaccount        |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          3.checkComputerRoom   |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          4.clearRecord         |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          0.exit                |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t ---------------------------------\n";
	cout << "please input your choice: " << endl;
}

void Manager::addPerson(){
    int select = 0;
    int key = 1;
    string fileName = "";
    ofstream ofs;
    while(key){
        cout << "please input your choice: " << endl;
        cout << "1. student" << endl;
        cout << "2. teacher" << endl;
        cin >> select;
        if(select == 1){
            fileName = STUDENT_FILE;
            key = 0;
        }else if(select == 2){
            fileName = TEACHER_FILE;
            key = 0;
        }else{
            cout << "input error!" << endl;
            system("pause");
            system("cls");
        }
    }
    ofs.open(fileName, ios::out | ios::app);
    int id = 0;
    string name = "";
    string pwd = "";
    while(true){
        cout << "please input your id:" << endl;
        cin >> id;
        // ²éÖØ
        this->initVector();
        bool check = this->checkRepeat(id, select);
        if(check){
            cout << "input id is repeat! please try again..." << endl;
        }else{
            break;
        }
    }
    cout << "please input your name:" << endl;
    cin >> name;
    cout << "please input your passward:" << endl;
    cin >> pwd;
    
    ofs << id << " " << name <<  " " << pwd << " " << endl;
}

void Manager::showPerson(){
    while(true)
    {
        this->initVector();
        cout << "please choose which do you want to show: " << endl;
        cout << "1.student   2.teacher" << endl;
        int select = 0;
        cin >> select;
        if(select == 1){
            for_each(vStu.begin(), vStu.end(), printStudent);
            break;
        }else if(select == 2){
            for_each(vTea.begin(), vTea.end(), printTeacher);
            break;
        }else{
            cout << "error input! choose again!" << endl;
            system("pause");
        }
    }
    system("pause");
    system("cls");
}

void Manager::showComputer(){
    this->initVector();
    for_each(vCom.begin(), vCom.end(), printComputer);
    system("pause");
    system("cls");
}

void Manager::cleanFile(){
    ofstream ofs(ORDER_FILE, ios::trunc);
    ofs.close();
    cout << "successfully cleanFile!" << endl;
    system("pause");
    system("cls");
}

void Manager::managerMenu(Identity* &manager){
    while(true){
        Manager* man = dynamic_cast<Manager*>(manager);
        man->operMenu();
        int select = -1;
        char sure = 'N';
        cin >> select;
        switch (select)
        {
        case 1:
            cout << "1.addaccount" << endl;
            man->addPerson();
            break;
        case 2:
            cout << "2.checkaccount" << endl;
            man->showPerson();
            break;
        case 3:
            cout << "3.checkComputerRoom" << endl;
            man->showComputer();
            break;
        case 4:
            cout << "4.clearRecord" << endl;
            man->cleanFile();
            break;
        case 0:
            cout << "are you sure to exit? Y/N" << endl;
            cin >> sure;
            if(sure == 'Y'){
                delete man;
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
        default:
            cout << "input error! please input again:" << endl;
            system("cls");
            break;
        }
    }
}

void Manager::initVector(){
    ifstream ifs;
    ifs.open(STUDENT_FILE, ios::in);
    if(!ifs.is_open()){
        cout << "no file" << endl;
        ifs.close();
        return;
    }
    this->vStu.clear();
    int id = -1;
    int num = -1;
    string name = "";
    string pwd = "";
    while(ifs >> id && ifs >> name && ifs >> pwd){
        // Student* stu = new Student(id, name, pwd);
        Student stu;
        stu.inputId(id);
        stu.m_Name = name;
        stu.m_Pwd = pwd;

        vStu.push_back(stu);
    }
    ifs.close();

    ifs.open(TEACHER_FILE, ios::in);
    if(!ifs.is_open()){
        cout << "no file" << endl;
        ifs.close();
        return;
    }
    this->vTea.clear();
    while(ifs >> id && ifs >> name && ifs >> pwd){
        Teacher* tea = new Teacher(id, name, pwd);
        // Teacher tea;
        // tea.inputId(id);
        // tea.m_Name = name;
        // tea.m_Pwd = pwd;
        vTea.push_back(*tea);
    }
    ifs.close();

    ifs.open(COMPUTER_FILE, ios::in);
    if(!ifs.is_open()){
        cout << "no file" << endl;
        ifs.close();
        return;
    }
    this->vCom.clear();
    while(ifs >> id && ifs >> num){
        ComputerRoom com;
        com.m_ComId = id;
        com.m_MaxNum = num;
        vCom.push_back(com);
    }
    ifs.close();
}

bool Manager::checkRepeat(int id, int type){
    if(type == 1){
        for(vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++){
            if(it->outputId() == id){
                return true;
            }
        }
    }else{
        for(vector<Teacher>::iterator it = vTea.begin(); it != vTea.end(); it++){
            if(it->outputId() == id){
                return true;
            }
        }
    }
    return false;
}

void printStudent(Student& s){
    cout << "id: " << s.outputId() << " name: " << s.showName() << " passward: " << s.showPwd() << endl;
}

void printTeacher(Teacher& t){
    cout << "id: " << t.outputId() << " name: " << t.showName() << " passward: " << t.showPwd() << endl;
}

void printComputer(ComputerRoom& c){
    cout << "id: " <<  c.m_ComId << " num: " << c.m_MaxNum << endl;
}
