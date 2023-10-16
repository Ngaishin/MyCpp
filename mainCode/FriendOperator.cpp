#if 0
#include <iostream>

using namespace std;

class Ope
{
public:
    Ope(int r=0,int i=0)
        :real(r),image(i)
    {
        // this->real=r;
        // this->image=i;
    }
    friend Ope operator+(Ope & r,Ope & i);
    void getReal(){
        cout<<real;
    }
    void getImage(){
        cout<<image;
    }

private:
    int real;
    int image;
};

Ope operator+(Ope & r,Ope & i)
{
    Ope oper;
    oper.real =r.real+i.real;
    oper.image=r.image+i.image;
    return oper;
}



int main()
{
    Ope i(1,3),j(3,5);
    Ope k ;
    k= i+j;
    k.getReal();
    k.getImage();
    return 0;
}
#endif
