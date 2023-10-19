#if 0
#include <iostream>

using namespace std;

class B;

class A
{
public:
    A(int i = 0, int j = 0)
        : real(i), image(j) {}
    friend class B;
    explicit A(const B &b);
    operator B() const;
    void dis();

private:
    int real;
    int image;
};

class B
{
public:
    B(int i = 0, int j = 0, int k = 0)
        : x(i), y(j), z(k) {}
    friend A;
    // explicit B(const A &a);
    operator A() const;
    void dis();

private:
    int x;
    int y;
    int z;
};

A::A(const B &b)
{
    this->real = b.x;
    this->image = b.y;
}
A::operator B() const
{
    return B(this->real, this->image);
}
void A::dis()
{
    cout << "(" << this->real << "," << this->image << ")" << endl;
}

// B::B(const A &a)
// {
//     this->x = a.real;
//     this->y = a.image;
//     this->z = 0;
// }
B::operator A() const
{
    return A(this->x, this->y);
}
void B::dis()
{
    cout << "(" << this->x << "," << this->y << "," << this->z << ")" << endl;
}
int main()
{
    A b(5, 5);
    B c(4, 4, 4);
    A a;
    B d(b);
    a = c;
    d = b;
    a.dis();
    b.dis();
    c.dis();
    d.dis();
    return 0;
}

#endif