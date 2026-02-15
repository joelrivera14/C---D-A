#include <iostream>

class Vect
{
public:
    Vect() : size(0), v(nullptr) {};
    Vect(int s) : size(s)
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
        v = new int[size];
        for (int i = 0; i < size; ++i)
            v[i] = b.v[i];
    }
    Vect &operator=(const Vect &b)
    {
        if (this == &b)
        {
            return *this;
        }
        size = b.size;
        delete[] v;
        v = new int[size];
        for (int i = 0; i < size; ++i)
        {
            v[i] = b.v[i];
        }
        return *this;
    }

private:
    int size;
    int *v;
};