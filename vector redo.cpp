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
    int &front()
    {
        return v[0];
    }
    int &back()
    {
        return v[size - 1];
    }
    void push_back(int i)
    {
        if (size >= capacity)
        {
            reserve((capacity == 0) ? 1 : capacity * 2);
        }
        v[size] = i;
        ++size;
    }
    void pop_back()
    {
        if (size > 0)
        {
            --size;
        }
    }
    void clear()
    {
        size = 0;
    }
    void insert(int index, int value)
    {
        if (size >= capacity)
        {
            reserve((capacity == 0) ? 1 : capacity * 2);
        }
        for (int i = size; i > index; --i)
        {
            v[i] = v[i - 1];
        }
        v[index] = value;
        ++size;
    }
    void erase(int index) {}

private:
    int size;
    int capacity;
    int *v;
};

int main()
{
    Vect v1(4);
    v1.push_back(2);
    return 0;
}