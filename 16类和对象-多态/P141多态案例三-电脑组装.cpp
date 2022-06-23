#include<iostream>
#include<string>
using namespace std;
class CPU{
public:
    virtual void calculate() = 0;
};

class VideaCard{
public:
    virtual void display() = 0;
};

class Memory{
public:
    virtual void storage() = 0;
};

class Computer{
public:
    Computer(CPU *cpu, VideaCard *vc, Memory *mem){
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }

    void work(){
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }

    ~Computer(){
       if(m_cpu != NULL){
           delete m_cpu;
           m_cpu = NULL;
       }
       if(m_vc != NULL){
           delete m_vc;
           m_vc = NULL;
       }
       if(m_mem != NULL){
           delete m_mem;
           m_mem = NULL;
       }
    }

private:
    CPU *m_cpu;
    VideaCard *m_vc;
    Memory *m_mem;

};

class InterCPU: public CPU{
public:
	virtual void calculate()
	{
		cout << "Intel CPU calculating" << endl;
	}
};

class AMDCPU: public CPU{
public:
	virtual void calculate()
	{
		cout << "AMD CPU calculating" << endl;
	}
};

class IntelVideoCard: public VideaCard{
public:
	virtual void display()
	{
		cout << "IntelVideoCard VideaCard displaying" << endl;
	}
};

class AMDVideoCard: public VideaCard{
public:
	virtual void display()
	{
		cout << "AMDVideoCard VideaCard displaying" << endl;
	}
};

class IntelMemory: public Memory{
public:
	virtual void storage()
	{
		cout << "IntelMemory Memory storaging" << endl;
	}
};

class AMDMemory: public Memory{
public:
	virtual void storage()
	{
		cout << "AMDMemory Memory storaging" << endl;
	}
};

void test01(){
    CPU *interCPU = new InterCPU;
    CPU *amdCPU = new AMDCPU;
    VideaCard *intelVideoCard = new IntelVideoCard;
    VideaCard *amdVideoCard = new AMDVideoCard;
    Memory *intelMemory = new IntelMemory;
    Memory *amdMemory = new AMDMemory;
    Computer *computer1 = new Computer(interCPU, intelVideoCard, amdMemory);
    computer1->work();
    delete computer1;

    Computer *computer2 = new Computer(new InterCPU, new IntelVideoCard, new AMDMemory);
    computer2->work();
    delete computer2;
    // Computer computer2(amdCPU, intelVideoCard, intelMemory);
    // computer2.work();
}

int main(){
    test01();

    system("pause");
    return 0;
}