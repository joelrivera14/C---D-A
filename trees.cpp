#include <iostream>

/* trees: nonlinear data structures in computing
 relationships in a tree are hierarchical, with some objects being above and
 some objects being below each other
 A tree is an abstact data type that stores elments heirarchically
 with the exception of the topmost element, the root, each element has a parent element
 and 0 or more children elements
 a node is a sibling if it shares a parent node with another node
 a node is external is it has no children, it is internal if it has one or more children
 external nodes are also known as leaves
 an edge in a tree is a pair of nodes such that node u is a parent to node v
 or vice versa
 a path is a sequence such that two consecutive nodes form an edge */

// informal C++ interface for the class Position
template <typename E>
class Position
{
public:
    E &operator*();
};

int main()
{

    return 0;
}