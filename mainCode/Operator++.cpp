#if 0
#include <iostream>

using namespace std;

class A
{
public:
    A(int i = 0, int j = 0) : real(i), image(j) {}
    ~A() {}
    friend ostream &operator<<(ostream &os, const A &a)
    {
        os << "(" << a.real << "," << a.image << ")";
        return os;
    }
    A &operator=(const A & another){
        this->real=another.real;
        this->image=another.image;
        return *this;
    }
    A & operator++()
    {
        this->real++;
        this->image++;
        return *this;
    }
    const A operator++(int)
    {
        A a(this->real, this->image);
        this->real++;
        this->image++;
        return a;
    }

private:
    int real;
    int image;
};

int main()
{
    A a(1, 2);
    cout << a << endl;
    ++a;
    A b= a++;
    cout << b << endl;
    cout << a << endl;
    return 0;
}
#endif