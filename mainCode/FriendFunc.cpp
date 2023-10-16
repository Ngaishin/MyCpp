#if 0 
#include <iostream>

using namespace std;
//fb used fa, declar fa first
class fa;

//ide don't know how big of fa ,so declare func of fb first
//accomplish func after fa in order to measuring fa memory
class fb
{
public:
    void usefa(fa & c);
private:
    int b;
};
void allusefa(fa & c);


class fa
{
public:
    void dis()
    {
        cout<<a<<endl;
    }
    friend void fb::usefa(fa & a);
    friend void allusefa(fa &a);
private:
    int a=3;
};

//ide don't know how big of the fa ,so func accomplish behind of fa;
void fb::usefa(fa & c){
    c.dis();
}
void allusefa(fa & c){
    cout<<c.a<<endl;
}

int main()
{
    fa a;
    fb b;
    b.usefa(a);
    allusefa(a);

    return 0;
}

#endif 