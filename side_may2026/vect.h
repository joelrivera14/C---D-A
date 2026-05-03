#ifndef VECT_H
#define VECT_H
#include <iostream>

template <typename E>
class VECT
{
public:
    VECT() : container(new E[1]), size(0), capacity(1) {}
    VECT(int c) : container(new E[c]), size(c), capacity(c) {}
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

private:
    E *container;
    int size;
    int capacity;
};

#endif