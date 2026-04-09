#include "stringLinkedList.h"

StringLinkedList::StringLinkedList() : head(nullptr) {}
StringLinkedList::~StringLinkedList()
{
    while (!empty())
    {
        removeFront();
    }
}
bool StringLinkedList::empty() const
{
    return head == nullptr;
}
const std::string &StringLinkedList::front() const
{
    return head->value;
}
void StringLinkedList::addFront(const std::string &e)
{
    StringNode *n = new StringNode;
    n->value = e;
    n->next = head;
    head = n;
}
void StringLinkedList::removeFront()
{
    if (head == nullptr)
    {
        return;
    }
    StringNode *old = head;
    head = old->next;
    delete old;
}