#if 0
#include <iostream>

using namespace std;

class chosen
{
public:
    chosen()
    {
        // pf[0] = &func0;
        // pf[1] = &func1;
        // pf[2] = &func2;
        // pf[3] = &func3;
    }
    void sel(int s)
    {
        (this->*pf[s])();
    }

private:
    void func0() { cout << "func0" << endl; }
    void func1() { cout << "func1" << endl; }
    void func2() { cout << "func2" << endl; }
    void func3() { cout << "func3" << endl; }

    //enum{cnt = 4};
    void (chosen::*pf[4])() = {func0, func1, func2, func3};

    //void (chosen::*pf[cnt])() = {};
};

int main()
{
    chosen c1;
    c1.sel(2);
    cout<<"finish"<<endl;
    return 0;
}
#endif