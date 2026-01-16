#ifndef DLL_H
#define DLL_H
#include <string>
#include "dnode.h"

typedef std::string Elem;
class DLinkedList
{ // doubly linked list
public:
    DLinkedList();
    ~DLinkedList();
    bool empty() const;
    const Elem &front() const;
    const Elem &back() const;
    void addFront(const Elem &e);
    void addBack(const Elem &e);
    void removeFront();
    void removeBack();

private:
    DNode *header;
    DNode *trailer;

protected:                             // local utilities
    void add(DNode *v, const Elem &e); // insert new node before v
    void remove(DNode *v);             // remove node v
};

#endif