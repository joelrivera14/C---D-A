#ifndef STRINGNODE_H
#define STRINGNODE_H
#include <string>

class StringNode
{

private:
    std::string value;
    StringNode *next;

    friend class StringLinkedList;
};

#endif