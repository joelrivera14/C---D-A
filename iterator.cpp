#include <iostream>
#include <list>

/* An Iterator supports the ability to access a nodes element and also
    provides the ability to traverse through the container
    */

int main()
{
    std::list<int> i;
    i.push_back(4);
    i.push_back(5);
    i.push_back(6);
    i.push_back(4);
    return 0;
}