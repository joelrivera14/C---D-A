#ifndef DNODE_H
#define DNODE_H
#include <string>

typedef std::string Element;
class DLinkedList;
class DNode
{
private:
    Element value;
    DNode *next;
    DNode *prev;
    friend class DLinkedList;
};

#endif