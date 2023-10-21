#if 0
#include <iostream>
#include "ClassCpyConstructor.h"
using namespace std;

int main()
{
    Student s("Lucy", 19);
    s.dis();
    cout << "--------------------" << endl;
    Student s2;
    s2.dis();
    s2 = s;
    s2.dis();
    cout << "====================" << endl;
    Doctor d("Punk", 200, "Dr.Punk");
    d.dis_Dr();
    cout << "--------------------" << endl;
    Doctor d2("Smith", 23, "Dr.Jan");
    d2.dis_Dr();
    d2 = d;
    d2.dis_Dr();
    cout << "--------------------" << endl;
    return 0;
}
#endif