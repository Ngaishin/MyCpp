#ifndef _DERIVEDCLASS_H
#define _DERIVEDCLASS_H

#include <iostream>

using namespace std;

class human
{
public:
    human(string name, int age, char gender)
        : _name(name), _age(age), _gender(gender) {}
    void dis();

protected:
    void eat(string food);

private:
    string _name;
    int _age;
    char _gender;
};

class student : public human
{
public:
    student(string name, int age, char gender, int score, string food)
        : human(name, age, gender), _score(score), _food(food) {}
    void print();

private:
    int _score;
    string _food;
};

#endif
