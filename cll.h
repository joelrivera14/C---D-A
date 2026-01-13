#ifndef CLL_H
#define CLL_H
#include <string>
#include "cNode.h"

typedef std::string Elem;
class CLinkedList
{
public:
    CLinkedList();
    ~CLinkedList();
    bool empty() const;
    const Elem &front() const;
    const Elem &back() const;
    void advance();          // advance cursor
    void add(const Elem &e); // add after cursor
    void remove();

private:
    CNode *cursor; // cursor is at the "back" of the list and points the the "front" of the list
};

#endif