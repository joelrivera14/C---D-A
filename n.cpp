#include <iostream>
#include "stringLinkedList.h"
#include "genericSL.h"

int main()
{
    StringLinkedList l;
    l.addFront("hw");
    l.addFront("3");
    l.addFront("hw33");
    std::cout << l.front() << "\n";

    SinglyLinkedList<int> ls;
    ls.addFront(2);
    ls.addFront(4);
    std::cout << ls.front() << "\n"; // linker errors, consider making .h file with templates only

    return 0;
}