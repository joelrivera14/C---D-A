#ifndef TEMPLATEC_H
#define TEMPLATEC_H

template <typename T>
class BasicVector
{
public:
    BasicVector(int c = 10) : a(new T[c]), capacity(c) {};
    T &operator[](int i)
    {
        return a[i];
    }

private:
    T *a;
    int capacity;
};

#endif
