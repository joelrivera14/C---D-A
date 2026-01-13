#include <iostream>

// when an alogorithm makes two recursive calls, it uses binary recursion
int binFib(int b);

int main()
{

    return 0;
}
int binFib(int b)
{
    if (b <= 1)
    {
        return b;
    }
    return binFib(b - 1) + binFib(b - 2);
}