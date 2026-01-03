#include "counter.h"

Counter::Counter() : count(0)
{
}
int Counter::getCount() const
{
    return count;
}
void Counter::increaseBy(int x)
{
    count += x;
}
