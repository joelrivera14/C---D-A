#include "student.h"
#include <iostream>

Student::Student(const std::string &n, const std::string &i, const std::string &m, int gY) : Person(n, i), major(m), gradYear(gY)
{
}
void Student::print()
{
    Person::print();
    std::cout << major << " ";
    std::cout << gradYear << "\n";
}
void Student::changeMajor(const std::string &m)
{
    major = m;
}