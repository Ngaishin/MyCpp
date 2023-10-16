#if 0
#include <iostream>

using namespace std;

class plural
{
public:
    plural(int i = 0, int j = 0)
        : real(i), image(j) {}

    friend ostream &operator<<(ostream &os, const plural &p);
    friend istream &operator>>(istream &os, plural &p);
private:
    int real;
    int image;
};

ostream &operator<<(ostream &os, const plural &p)
{
    if (p.image >= 0)
        os << p.real << "+" << p.image << "i";
    else
        os << p.real << p.image << "i";
    return os;
}
istream &operator>>(istream &is, plural &p)
{
    is>>p.real;
    is>>p.image;
    return is;
}

int main()
{
    plural p1(1,2),p2(2,3),p3(4,6);
    cout<<p1<<p2<<p3<<endl;
    cin>>p1>>p2>>p3;
    cout<<p1<<p2<<p3;
    return 0;
}
#endif