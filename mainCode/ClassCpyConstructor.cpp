#include "ClassCpyConstructor.h"
#include <iostream>

using namespace std;

Student::Student(string name, int age)
    : _name(name), _age(age) {}
Student::Student(const Student &another)
{
    this->_age = another._age;
    this->_name = another._name;
}

Student &Student::operator=(const Student &another)
{
    this->_age = another._age;
    this->_name = another._name;
    return *this;
}

void Student::dis()
{
    cout << "name : " << this->_name << endl;
    cout << "age  : " << this->_age << endl;
}

///////////////////////////////////////////////////

Doctor::Doctor(string name, int age, string title)
    : Student(name, age), _title(title) {}

// Constructor will not be inherited,only this way.
Doctor::Doctor(const Doctor &another)
    : Student(another)
{
    this->_title = another._title;
}
// Operator has been inherited
Doctor &Doctor::operator=(const Doctor &another)
{
    Student::operator=(another);
    this->_title = another._title;
    return *this;
}

void Doctor::dis_Dr()
{
    dis();
    cout << "title: " << _title << endl;
}