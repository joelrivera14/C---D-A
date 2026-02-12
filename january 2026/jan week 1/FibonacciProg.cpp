#include "FibonacciProg.h"

FibonacciProg::FibonacciProg(long f, long s) : Progression(f), second(s), prev(second - first) {}
long FibonacciProg::firstValue()
{
    cur = first;
    prev = second - first;
    return cur;
}
long FibonacciProg::nextValue()
{
    long temp = prev;
    prev = cur;
    cur += temp;
    return cur;
}
