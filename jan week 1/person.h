#ifndef PERSON_H
#define PERSON_H
#include <string>

// a protected member in the base class allows access to derived classes but not to the outside
class Person
{
private:
    std::string name;
    std::string id;

public:
    Person(const std::string &n, const std::string &i);
    // virtual destructor allows dervied classes to invoke destructor if needed
    virtual ~Person() = default;
    virtual void print();
    std::string getName() const;
};

#endif