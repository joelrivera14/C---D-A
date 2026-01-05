#include <iostream>
#include "templateC.h"

int integerMin(int a, int b);
template <typename T>
T generalMin(T a, T b);
int main()
{
    std::cout << generalMin(7, 5) << "\n";
    BasicVector<int> b(10);
    std::cout << b[4] << "\n";

    return 0;
}

int integerMin(int a, int b)
{
    return (a < b ? a : b);
}
template <typename T>
T generalMin(T a, T b)
{
    return (a < b ? a : b);
}