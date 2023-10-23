#include "DerivedClass.h"
#include <iostream>

using namespace std;

void human::dis()
{
    cout << "name  : " << this->_name << endl;
    cout << "age   : " << this->_age << endl;
    cout << "gender: " << this->_gender << endl;
}

void human::eat(string food)
{
    cout << "like eating " << food << endl;
}

void student::print()
{
    this->dis();
    cout << "score : " << _score << endl;
    this->eat(this->_food);
}