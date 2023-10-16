#if 0 
#include <iostream>
#include <math.h>

using namespace std;

class Point
{
public:
    Point(double xx, double yy)
        : x(xx), y(yy){}
    friend class PointManagement;

private:
    double x;
    double y;
};

class PointManagement
{
public:
    double distance(Point &a, Point &b)
    {
        double l = a.x - b.x;
        double h = a.y - b.y;
        return sqrt(l * l + h * h);
    }
    double x_distance(Point & a,Point & b)
    {
        return fabsl(a.x-b.x);
    }
    double y_distance(Point & a,Point & b)
    {
        return fabsl(a.y-b.y);
    }
};

int main()
{
    Point a(1, 2);
    Point b(-1, -2);
    PointManagement d;
    cout << "d.distance(a, b) = " <<d.distance(a, b) << endl;
    cout<<"d.y-distance = "<<d.y_distance(a,b)<<endl;
    cout<<"d.x-distance = "<<d.x_distance(a,b)<<endl;
    return 0;
}
#endif