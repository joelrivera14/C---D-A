#include <iostream>
#include <algorithm> // for max()

typedef int Element;
class IntArray
{
public:
    ~IntArray()
    {
        delete[] e;
    };
    IntArray() : s(0), capacity(0), e(nullptr) {};
    IntArray(const IntArray &ia)
    {
        s = ia.s;
        capacity = ia.capacity;
        e = new Element[capacity];
        for (int i = 0; i < s; ++i)
        {
            e[i] = ia.e[i];
        }
    }
    IntArray &operator=(const IntArray &ia)
    {
        if (this == &ia)
        {
            return *this;
        }
        s = ia.s;
        capacity = ia.capacity;
        delete[] e;
        e = new Element[capacity];
        for (int i = 0; i < s; ++i)
        {
            e[i] = ia.e[i];
        }
        return *this;
    };
    int size() const
    {
        return s;
    };
    Element &operator[](int i)
    {
        return e[i];
    }
    Element &at(int i)
    {
        return e[i];
    };
    void erase(int i)
    {
        for (int u = i + 1; u < s; ++u)
        {
            e[u - 1] = e[u];
        }
        --s;
    };
    void insert(int i, const Element &el)
    {
        if (s == capacity)
        {
            reserve(std::max(1, 2 * capacity));
        }
        for (int u = s - 1; u >= i; --u)
        {
            e[u + 1] = e[u];
        }
        e[i] = el;
        ++s;
    };
    void reserve(int n)
    {
        if (n == capacity)
        {
            return;
        }
        Element *b = new Element[n];
        for (int i = 0; i < s; ++i)
        {
            b[i] = e[i];
        }
        delete[] e;
        e = b;
        capacity = n;
    };

private:
    int s;
    int capacity;
    Element *e;
};

int main()
{

    return 0;
}