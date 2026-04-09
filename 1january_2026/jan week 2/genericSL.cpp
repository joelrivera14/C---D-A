#include "genericSL.h"

template <typename E>
SinglyLinkedList<E>::SinglyLinkedList() : head(nullptr) {}

template <typename E>
SinglyLinkedList<E>::~SinglyLinkedList()
{
    while (!isEmpty())
    {
        removeFront();
    }
}

template <typename E>
bool SinglyLinkedList<E>::isEmpty() const
{
    return head == nullptr;
}

template <typename E>
const E &SinglyLinkedList<E>::front() const
{
    return head->value;
}

template <typename E>
void SinglyLinkedList<E>::addFront(const E &e)
{
    SNode<E> *n = new SNode<E>;
    n->value = e;
    n->next = head;
    head = n;
}

template <typename E>
void SinglyLinkedList<E>::removeFront()
{
    SNode<E> *old = head;
    head = head->next;
    delete old;
}