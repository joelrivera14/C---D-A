#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

template <typename E>
class ArrayStack
{
    enum
    {
        DEF_CAPACITY = 100
    };

public:
    ArrayStack(int cap = DEF_CAPACITY) : s(new E[cap]), capacity(cap), t(-1) {}
    int size() const
    {
        return (t + 1);
    }
    bool empty() const
    {
        return (t < 0);
    }
    const E &top() const
    {
        return s[t];
    }
    void push(const E &e)
    {
        s[++t] = e;
    }
    void pop()
    {
        --t;
    }

private:
    E *s;
    int capacity;
    int t;
};

#endif