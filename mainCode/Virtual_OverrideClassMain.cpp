#if 0
#include <iostream>

using namespace std;
//Move is abstuct base class,because having abstruct function
class Move
{
public:
    //Virtual destructor:
        //When using a virtual base class to new for space, 
        //be sure to use virtual destructor
    virtual ~Move(){}
    //abstruct function
    virtual void move(){}
};

class goHome : public Move
{
public:
    virtual void move();
};
class gotoSchool : public Move
{
public:
    virtual void move();
};

class gotoBed : public Move
{
public:
    virtual void move();
};

// accomplish
void goHome::move() { cout << "go home." << endl; }
void gotoSchool::move() { cout << "go to school." << endl; }
void gotoBed::move() { cout << "go to bed." << endl; }

int main()
{
    goHome gh;
    gotoSchool gs;
    gotoBed gb;
    Move *m;
    int i;
    while (1)
    {
        cin >> i;
        switch (i)
        {
        case 1:
            m = &gb;
            m->move();
            break;
        case 2:
            m = &gh;
            m->move();
            break;
        case 3:
            m = &gs;
            m->move();
            break;
        }
    }
    return 0;
}

#endif