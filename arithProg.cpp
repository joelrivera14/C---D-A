#include "arithProg.h"

ArithProg::ArithProg(long i) : Progression(), inc(i) {}
long ArithProg::nextValue()
{
    cur += inc;
    return cur;
}