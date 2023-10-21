#if 0
#include <iostream>

using namespace std;

class Student
{
public:
    Student(int i = 0);

    friend ostream &operator<<(ostream &os, Student& s);

private:
    int _id;
};

class Graduate : public Student
{
public:
    Graduate(int id = 0, string name = "Null");
    friend ostream &operator<<(ostream &os, Graduate& g);

private:
    string _name;
};
//------------------------//

Student::Student(int i) : _id(i) {}


ostream &operator<<(ostream &os, Student &s)
{
    os <<"id  : "<< s._id;
    return os;
} 

Graduate::Graduate(int id, string name)
    : Student(id), _name(name) {} 
      
ostream &operator<<(ostream &os, Graduate &g)
{
    os<<static_cast<Student&>(g)<<endl;
    os<<"name: "<<g._name;
    return os;
}

    

int main()
{
    Student s;
    cout << s << endl;
    Graduate g(2, "Bot");
    cout << g << endl;
    return 0;
}

#endif