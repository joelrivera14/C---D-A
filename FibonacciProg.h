#ifndef FIBONACCIPROG_H
#define FIBONACCIPROG_H
#include "progression.h"

class FibonacciProg : public Progression
{
public:
    FibonacciProg(long f = 0, long s = 1);

protected:
    long second;
    long prev;
    long firstValue() override;
    long nextValue() override;
};

#endif