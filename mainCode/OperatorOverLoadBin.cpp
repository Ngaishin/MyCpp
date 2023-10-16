#if 0
#include <iostream>

using namespace std;

class plural
{
public:
    plural(int r = 0, int i = 0)
        : real(r), image(i) {}
    const plural operator+(const plural &another) const;    
    const plural operator-(const plural &another) const;
    const plural operator-();
    plural & operator=(const plural &another);
    plural & operator+=(plural &another);
    plural & operator-=(plural &another);
    void dis();

private:
    int real;
    int image;
};

// accomplish:
const plural plural::operator+(const plural &another) const
{
    return plural(this->real+another.real,this->image+another.image);
}
const plural plural::operator-(const plural &another) const
{
    return plural(this->real-another.real,this->image-another.image);
}
const plural plural::operator-(){
    return plural(-this->real,-this->image);
}
plural &plural::operator=(const plural & another)
{
        this->real = another.real;
        this->image = another.image;
        return *this;  
}
plural &plural::operator+=(plural &another) 
{
    this->real = this->real + another.real;
    this->image = this->image +another.image;
    return *this;
}
plural &plural::operator-=(plural &another) 
{
    this->real = this->real - another.real;
    this->image = this->image -another.image;
    return *this;
}
void plural::dis()
{
    if (this->image >= 0)
        cout << real << "+" << image << "i" << endl;
    else
        cout << real << image << "i" << endl;
}

int main()
{
    int a = 10, b = 20, c = 30;
    a=b-c+b;
    cout << a << "," << b << "," << c << endl;
    cout << "-------------------------------" << endl;


    plural p(1, -2), q(3, 4), r(2,5);
    r=-r+p+q;



    p.dis();q.dis();r.dis();

    return 0;
}
#endif