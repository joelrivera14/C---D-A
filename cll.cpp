#include "cll.h"

CLinkedList::CLinkedList() : cursor(nullptr) {}
CLinkedList::~CLinkedList()
{
    while (!empty())
    {
        remove();
    }
}
bool CLinkedList::empty() const
{
    return cursor == nullptr;
}
const Elem &CLinkedList::front() const
{
    return cursor->next->value;
}
const Elem &CLinkedList::back() const
{
    return cursor->value;
}
void CLinkedList::advance()
{
    cursor = cursor->next;
}
void CLinkedList::add(const Elem &e)
{
    CNode *d = new CNode;
    d->value = e;
    if (empty())
    {
        d->next = d;
        cursor = d;
    }
    else
    {
        d->next = cursor->next;
        cursor->next = d;
    }
}
void CLinkedList::remove()
{
    CNode *old = cursor->next;
    if (old == cursor)
    {
        cursor = nullptr;
        delete old;
    }
    else
    {
        cursor->next = old->next;
        delete old;
    }
}