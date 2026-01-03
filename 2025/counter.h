#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
private:
    int count;

public:
    Counter();
    int getCount() const;
    void increaseBy(int x);
};

#endif