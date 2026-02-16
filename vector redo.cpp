#include <iostream>

class Vect
{
public:
    Vect() : size(0), capacity(0), v(nullptr) {};
    Vect(int s) : size(s), capacity(s)
    {
        v = new int[s];
    }
    ~Vect()
    {
        delete[] v;
    }
    Vect(const Vect &b)
    {
        size = b.size;
        capacity = b.capacity;
        v = new int[capacity];
        for (int i = 0; i < size; ++i)
            v[i] = b.v[i];
    }
    Vect &operator=(const Vect &b)
    {
        if (this == &b)
        {
            return *this;
        }
        delete[] v;
        size = b.size;
        capacity = b.capacity;
        v = new int[capacity];
        for (int i = 0; i < size; ++i)
        {
            v[i] = b.v[i];
        }
        return *this;
    }
    int vSize() const
    {
        return size;
    }
    bool empty() const
    {
        return size == 0;
    }
    void reserve(int c)
    {
        if (c <= capacity)
            return;
        int *b = new int[c];
        for (int i = 0; i < size; ++i)
        {
            b[i] = v[i];
        }
        delete[] v;
        capacity = c;
        v = b;
    }

private:
    int size;
    int capacity;
    int *v;
};