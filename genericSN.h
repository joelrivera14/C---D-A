#ifndef GENERICSL_H
#define GENERICSL_H
#include "genericSL.h"

template <typename E>
class SNode
{
private:
    E value;
    SNode<E> *next;
    friend class SinglylinkedList<E>;
};

#endif