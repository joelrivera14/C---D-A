#include <iostream>
#include <list>

/* An Iterator supports the ability to access a nodes element and also
    provides the ability to traverse through the container
*/
template <typename El>
struct Node
{
    El e;
    Node *prev;
    Node *next;
};

template <typename El>
class Iterator
{
public:
    El &operator*() {};
    bool operator==(const Iterator &b) const {};
    bool operator!=(const Iterator &b) const {};
    Iterator &operator++() {};
    Iterator &operator--() {};
    friend class NodeList;

private:
    Node *v;
    Iterator(Node *u);
};

int main()
{
    std::list<int> i;
    i.push_back(4);
    i.push_back(5);
    i.push_back(6);
    i.push_back(4);
    std::cout << i.front() << "\n";
    return 0;
}