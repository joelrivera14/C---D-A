#include <iostream>
#include <vector>

void print(std::vector<int> *v);
int main()
{
    std::vector<int> *i = new std::vector<int>{4, 5, 6, 7, 2};
    std::cout << (*i)[0] << "\n";
    print(i);
    i->insert(i->begin(), 1);
    i->insert(i->begin() + 5, 8);
    print(i);
    delete i;
    return 0;
}
void print(std::vector<int> *v)
{
    for (int i = 0; i < v->size(); ++i)
    {
        std::cout << (*v)[i] << ' ';
    }
    std::cout << "\n";
}