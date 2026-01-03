#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "person.h"

// public inheritance, implied "is-a" relationship
class Student : public Person
{
private:
    std::string major;
    int gradYear;

public:
    Student(const std::string &n, const std::string &i, const std::string &m, int gY);
    void print();
    void changeMajor(const std::string &m);
};

#endif