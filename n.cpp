#include <iostream>
#include "stringNode.h"
#include "stringLinkedList.h"

int main()
{
    StringLinkedList l;
    l.addFront("hw");
    l.addFront("3");
    l.addFront("hw33");
    std::cout << l.front() << "\n";

    return 0;
}