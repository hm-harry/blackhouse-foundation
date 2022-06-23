#include<iostream>
#include<string>
using namespace std;
//成员属性设置为私有
class Person{
public:
    void setName(string name){
        m_Name = name;
    }
    string getName(){
        return m_Name;
    }
    int getAge() {
		return m_Age;
	}
	void setAge(int age) {
		if (age < 0 || age > 150) {
            m_Age = 0;
			cout << "false!" << endl;
			return;
		}
		m_Age = age;
	}
    void setLover(string lover) {
		m_Lover = lover;
	}
private:
    string m_Name;
    int m_Age;
    string m_Lover;
};

int main(){
    Person p;
    p.setName("zhangsan");
    p.setAge(1000);
    cout << p.getName() << endl;
    cout << p.getAge() << endl;
    system("pause");
    return 0;
}