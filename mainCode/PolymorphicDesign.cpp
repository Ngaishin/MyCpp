#if 0
#include <iostream>

using namespace std;

class cpu
{
public:
    cpu() { cout << "cpu()" << endl; }
    virtual ~cpu() { cout << "~cpu()" << endl; }
    virtual void run() {}
};

class mem
{
public:
    mem() { cout << "mem()" << endl; }
    virtual ~mem() { cout << "~mem()" << endl; }
    virtual void run() {}
};

class Intelcpu : public cpu
{
public:
    Intelcpu() { cout << "Intelcpu()" << endl; }
    ~Intelcpu() { cout << "~Intelcpu()" << endl; }
    virtual void run()
    {
        cout << "Intel cpu running..." << endl;
    }
};

class Idk : public mem
{
public:
    Idk() { cout << "Idk()" << endl; }
    ~Idk() { cout << "~Idk()" << endl; }
    virtual void run()
    {
        cout << "Idk memory running..." << endl;
    }
};

class Computer
{
public:
    Computer(cpu *cpu, mem *memory)
        : _cpu(cpu), _mem(memory)
    {
        cout << "Computer()" << endl;
    }
    ~Computer()
    {
        cout << "~Computer()" << endl;
        delete _cpu;
        delete _mem;
    }
    void work()
    {
        _cpu->run();
        _mem->run();
    }

private:
    cpu *_cpu;
    mem *_mem;
};

int main()
{
    Computer c(new Intelcpu, new Idk);
    c.work();
    return 0;
}
#endif