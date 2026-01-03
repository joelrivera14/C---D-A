#include <iostream>
#include "passanger.h"

int main()
{
    std::cout << "p1 syas hi" << std::endl;
    Passanger p1{};
    std::cout << p1.isFrequentFlyer() << std::endl;

    return 0;
}