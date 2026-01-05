#include <iostream>
#include "Scores.h"

int main()
{
    Scores s;
    s.add(GameEntry("joel", 10000000));
    s.add(GameEntry("ant", 20232));
    s.add(GameEntry("pant", 1));
    s.add(GameEntry("tant", 2323));
    std::cout << s << "\n";

    return 0;
}