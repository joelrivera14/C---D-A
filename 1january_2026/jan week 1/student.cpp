#include "student.h"
#include <iostream>

// derived classes are destroyed first, then base classes which is the reverse of their construction where
// base classes are constructed first
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