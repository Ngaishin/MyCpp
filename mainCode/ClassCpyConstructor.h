#ifndef _CCCONSTRUCTOR_H
#define _CCCONSTRUCTOR_H


class Student
{
public:
    Student(string name = "NULL", int age = 0);
    Student(const Student &another);
    Student &operator=(const Student &another);

    void dis();

private:
    string _name;
    int _age;
};

class Doctor : public Student
{
public:
    Doctor(string name = "NULL", int age = 0, string title = "");
    Doctor(const Doctor &another);
    Doctor &operator=(const Doctor &another);
    void dis_Dr();

private:
    string _title;
};

#endif
