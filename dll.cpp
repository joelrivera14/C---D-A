#include "dll.h"

DLinkedList::DLinkedList() : header(new DNode), trailer(new DNode)
{
    header->prev = nullptr;
    header->next = trailer;
    trailer->prev = header;
    trailer->next = nullptr;
}
DLinkedList::~DLinkedList()
{
    while (!empty())
    {
        removeFront();
    }
    delete header;
    delete trailer;
}
bool DLinkedList::empty() const
{
    return header->next == trailer;
}
const Elem &DLinkedList::front() const
{
    return header->next->value;
}
const Elem &DLinkedList::back() const
{
    return trailer->prev->value;
}
void DLinkedList::add(DNode *v, const Elem &e)
{
    DNode *u = new DNode;
    u->value = e;
    u->next = v;
    u->prev = v->prev;
    v->prev->next = u; // v prev * now points to u
    v->prev = u;
}
void DLinkedList::addFront(const Elem &e)
{
    add(header->next, e);
}
void DLinkedList::addBack(const Elem &e)
{
    add(trailer, e);
}
void DLinkedList::remove(DNode *v)
{
    DNode *d = v->prev; // node before v
    DNode *e = v->next; // node after v
    d->next = e;        // unlink v from the list
    e->prev = d;
    delete v;
}
void DLinkedList::removeFront()
{
    remove(header->next);
}
void DLinkedList::removeBack()
{
    remove(trailer->prev);
}