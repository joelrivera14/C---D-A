#include <iostream>

int main()
{
    // messing with pointers
    int x = 10;
    int u = 20;
    int *r = &u;
    int *p = &x;
    std::cout << p << " " << *p << std::endl;

    *p = *r;
    std::cout << p << " " << *p << std::endl;
    return 0;
}