#include "person.h"
#include <iostream>

Person::Person(const std::string &n, const std::string &i) : name(n), id(i)
{
}
void Person::print()
{
    std::cout << name << " ";
    std::cout << id << " ";
}
std::string Person::getName() const
{
    return name;
}