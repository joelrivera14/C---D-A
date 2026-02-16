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
    int getSize() const
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
    void resize(int s)
    {
        if (s > capacity)
        {
            reserve(s);
        }
        if (s > size)
        {
            for (int i = size; i < s; ++i)
            {
                v[i] = 0;
            }
        }
        size = s;
    }
    int &operator[](int index)
    {
        return v[index];
    }
    const int &operator[](int index) const
    {
        return v[index];
    }
    int &at(int index)
    {
        return v[index];
    }
    const int &at(int index) const
    {
        return v[index];
    }

private:
    int size;
    int capacity;
    int *v;
};