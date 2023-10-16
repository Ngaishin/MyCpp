#if 0
#include <iostream>

using namespace std;

class plural
{
public:
    plural(int i = 0, int j = 0)
        : real(i), image(j) {}
    plural & operator++();

    void dis();

private:
    int real;
    int image;
};

plural &plural::operator++()
{
    this->real += 1;
    this->image += 1;
    return *this;
}

void plural::dis()
{
    if (this->image >= 0)
        cout << this->real << "+" << this->image << "i" << endl;
    else
        cout << this->real << this->image << "i" << endl;
}

int main()
{
    plural p(-1,-11);
    ++p;
    p.dis();
    return 0;
}
#endif