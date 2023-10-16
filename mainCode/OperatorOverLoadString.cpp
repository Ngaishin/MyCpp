#if 0
#include <iostream>
#include <string.h>
using namespace std;

class istring
{
public:
    istring(const char *p = nullptr);
    //~istring();
    istring(const istring &another);
    istring &operator=(const char *p);
    friend ostream &operator<<(ostream &os, istring &st);
    friend istream &operator>>(istream &is, istring &st);

private:
    char *str;
};

// accomplish
istring::istring(const char *p)
{
    if (p == NULL)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        int len = strlen(p);
        str = new char[len + 1];
        strcpy(str, p);
    }
}
istring::istring(const istring &another)
{
    int len = strlen(another.str);
    str = new char[len + 1];
    strcpy(str, another.str);
}
// istring::~istring() { delete []str; }
istring &istring::operator=(const char *p)
{
    if (str != nullptr)
    {
        delete[] str;
    }

    if (p == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        int len = strlen(p);
        str = new char[len + 1];
        strcpy(str, p);
    }
    return *this;
}
ostream &operator<<(ostream &os, istring &st)
{
    os << st.str;
    return os;
}
istream &operator>>(istream &is, istring &st)
{
    char buf[BUFSIZ];
    is >> buf;
    delete[] st.str;
    int len = strlen(buf);
    st.str = new char[len + 1];
    strcpy(st.str, buf);
    return is;
}

int main()
{
    istring s1;
    s1 = "Hello";
    istring s2(s1);
    cout << s1 << endl;
    cin >> s1;
    cout << s1;
    return 0;
}
#endif