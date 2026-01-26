#include <deque>
#include <iostream>

int main()
{
    std::deque<int> iCont;
    iCont.push_front(3);
    iCont.push_back(4);
    std::cout << iCont.front() << "\n";
    std::cout << iCont.back() << "\n";

    return 0;
}