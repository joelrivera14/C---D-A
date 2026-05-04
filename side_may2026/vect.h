#ifndef VECT_H
#define VECT_H
#include <iostream>

template <typename E>
class VECT
{
public:
    VECT() : container(new E[1]), size(0), capacity(1) {}
    VECT(int c) : container(new E[c]), size(c), capacity(c) {}
    VECT(VECT &b)
    {
        VECT *
    }
    ~VECT()
    {
        delete[] container;
    }
    void push_back(E val)
    {
        if (size == capacity)
            resize(capacity * 2);
        container[size] = val;
        size++;
    }
    void print()
    {
        for (int i = 0; i < size; ++i)
        {
            std::cout << container[i] << " ";
        }
        std::cout << "\n";
    }
    void resize(int newSize)
    {
        if (newSize <= 0)
            newSize = 1;
        capacity = newSize;
        E *newContainer = new E[capacity];
        for (int i = 0; i < size; ++i)
        {
            newContainer[i] = container[i];
        }
        delete[] container;
        container = newContainer;
    }

private:
    E *container;
    int size;
    int capacity;
};

#endif