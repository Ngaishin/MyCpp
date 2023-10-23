#include <iostream>

using namespace std;

class A
{
public:
    static void func()
    {
        cout << "this is static func()." << endl;
        cout << "i = " << i << endl;
    }

private:
    static int i;
};

class B : public A
{
public:
    static void func()
    {
        cout << "this is BBBBBBBBBBBBBBBB static func()." << endl;
        cout << "i = " << i << endl;
    }

private:
    static int i;
};
int B::i = 9;
int A::i = 3;
int main()
{

    B b;
    b.A::func();
    return 0;
}
