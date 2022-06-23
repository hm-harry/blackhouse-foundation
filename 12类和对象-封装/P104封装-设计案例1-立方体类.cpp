#include<iostream>
#include<string>
using namespace std;
class Cube
{
private:
    int m_L;
    int m_W;
    int m_H;

public:
    void setL(int l){
        m_L = l;
    }
    int getL(){
        return m_L;
    }
    void setW(int w){
        m_W = w;
    }
    int getW(){
        return m_W;
    }
    void setH(int h){
        m_H = h;
    }
    int getH(){
        return m_W;
    }
    int calculateS(){
        return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
    }
    int calculateV(){
        return m_H * m_L * m_W;
    }

    bool isSameByClass(Cube c){
        if(c.getH() == m_H && c.getL() == m_L && c.getW() == m_W){
            return true;
        }else{
            return false;
        }
    }
};

bool isSame(Cube c1, Cube c2){
    if(c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW()){
        return true;
    }else{
        return false;
    }
}

int main(){
    Cube c1;
    c1.setH(10);
    c1.setL(10);
    c1.setW(10);
    cout << "c1.calculateS(): " << c1.calculateS() << endl;
    cout << "c1.calculateV(): " << c1.calculateV() << endl;

    Cube c2;
    c2.setH(10);
    c2.setL(10);
    c2.setW(10);

    bool ret = isSame(c1, c2);
    if(ret){
        cout << "same" << endl;
    }else{
        cout << "different" << endl;
    }

    bool ret2 = c1.isSameByClass(c2);
    if(ret2){
        cout << "same" << endl;
    }else{
        cout << "different" << endl;
    }
    
    system("pause");
    return 0;
}