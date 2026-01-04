#include <iostream>

int integerMin(int a, int b);
template <typename T>
T generalMin(T a, T b);
int main()
{

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