#include <iostream>
#include <vector>

int main()
{
    std::vector<int> *i = new std::vector<int>{4,5,6,7,2};
    std::cout<<(*i)[0]<<"\n";
    ++i;
    std::cout<<(*i)[0]<<"\n";
    delete i;
    return 0;
}