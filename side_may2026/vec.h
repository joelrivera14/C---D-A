#ifndef VEC_H
#define VEC_H
#include <iostream>

template <typename E>
class VEC
{
public:
    VEC() : container(new E[1]), size(0), capacity(1) {}
    VEC(int cap) : container(new E[cap]{}), size(0), capacity(cap) {}
    VEC(VEC &v)
    {
        size = v.size;
        capacity = v.capacity;
        E *newContainer = new E[capacity];
        for (int i = 0; i < size; ++i)
        {
            newContainer[i] = v.container[i];
        }
        container = newContainer;
    }
    VEC &operator=(VEC &v)
    {
        if (this == &v)
            return *this;
        delete[] container;
        size = v.size;
        capacity = v.capacity;
        E *newCont = new E[capacity];
        for (int i = 0; i < size; ++i)
        {
            newCont[i] = v.container[i];
        }
        container = newCont;
        return *this;
    }
    ~VEC()
    {
        delete[] container;
    }
    void push_back(E val)
    {
        if (size == capacity)
        {
            resize(capacity * 2);
        }
        container[size] = val;
        size++;
    }
    void resize(int newSize)
    {
        if (newSize < 0)
            newSize = 1;
        capacity = newSize;
        E *newContainer = new E[capacity];
        for (int i = 0; i < size; i++)
        {
            newContainer[i] = container[i];
        }
        delete[] container;
        container = newContainer;
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