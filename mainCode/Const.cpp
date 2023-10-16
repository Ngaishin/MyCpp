#if 0
//const objects cannot use non-const func.

#include <iostream>
#include <iomanip>

using namespace std;

class Test
{
public:
    Test()
        :num(s++){}
    ~Test(){
        //cout << "Test object with num " << num << " is being destroyed." << endl;
    }

    const int a=10;
    int b=20;
    int getNoCon();
    int get() const ;

    int getNum(){
        return num;
    }
    int getQnty(){
        return s;
    }

private:
    const int num;
    static int s;
};

int Test::s=0;

int Test::getNoCon(){
    return 777;
}
int Test::get() const {
    return 666;
}

int main()
{
    const Test t1;
    Test t2;

    //cout<<"const t1 getNoCon Func: "<<setw(5)<<setfill('0')<<right<<t1.getNoCon()<<endl;
    cout<<"const t1 getConst Func: "<<setw(5)<<setfill('0')<<right<<t1.get()<<endl;
    cout<<"const t1 const int    : "<<setw(5)<<setfill('0')<<right<<t1.a<<endl;
    cout<<"const t1 int          : "<<setw(5)<<setfill('0')<<right<<t1.b<<endl;

    cout<<"t2 getNoCon Func      : "<<setw(5)<<setfill('0')<<right<<t2.getNoCon()<<endl;

    
    
    return 0;
}
#endif