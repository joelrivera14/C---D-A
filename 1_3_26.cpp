#include <iostream>
#include "person.h"
#include "student.h"

int main()
{
    Person p("joel", "1");
    Student s("bri", "2", "CSIS", 2);
    s.print();

    return 0;
}