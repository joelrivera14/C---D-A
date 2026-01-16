#ifndef GENERICSN_H
#define GENERICSN_H

template <typename E>
class SinglyLinkedList;

template <typename E>
class SNode
{
private:
    E value;
    SNode<E> *next;
    friend class SinglyLinkedList<E>;
};

#endif