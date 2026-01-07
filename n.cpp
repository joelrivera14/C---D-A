#include <iostream>
#include "stringNode.h"
#include "stringLinkedList.h"

int main()
{
    StringLinkedList l;
    l.addFront("hw");
    std::cout << l.front() << "\n";

    return 0;
}