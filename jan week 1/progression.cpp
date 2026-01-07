#include "progression.h"
#include <iostream>

Progression::Progression(long f) : first(f), cur(f)
{
}
void Progression::printProgression(int n)
{
    std::cout << firstValue();
    for (int i = 2; i <= n; i++)
        std::cout << " " << nextValue();
    std::cout << std::endl;
}
long Progression::firstValue()
{
    cur = first;
    return cur;
}
