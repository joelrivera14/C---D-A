#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
private:
    std::string name;
    std::string id;

public:
    Person(const std::string &n, const std::string &i);
    void print();
    std::string getName() const;
};

#endif