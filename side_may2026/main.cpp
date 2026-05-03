#include <iostream>
#include "vect.h"

int main()
{
    VECT<int> v;
    VECT<int> s(5);
    v.print();
    s.print();
    return 0;
}