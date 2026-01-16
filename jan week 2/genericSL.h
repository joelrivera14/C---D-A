#ifndef GENERICSL_H
#define GENERICSL_H
#include "genericSN.h"

template <typename E>
class SinglyLinkedList
{
public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    bool isEmpty() const;
    const E &front() const;
    void addFront(const E &e);
    void removeFront();

private:
    SNode<E> *head;
};

#endif