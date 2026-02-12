#ifndef CNODE_H
#define CNODE_H
#include <string>

class CLinkedList;
typedef std::string Elem;
class CNode
{
private:
    Elem value;
    CNode *next;
    friend class CLinkedList;
};

#endif