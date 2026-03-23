#include <iostream>
struct DoublyLinkedListNode
{
    int val;
    DoublyLinkedListNode *prev;
    DoublyLinkedListNode *next;
    DoublyLinkedListNode(int v) : val(v), prev(nullptr), next(nullptr) {}
};

void addNode(DoublyLinkedListNode *node, DoublyLinkedListNode *nodeToAdd);
void deleteNode(DoublyLinkedListNode *node);
int main()
{
    DoublyLinkedListNode *one = new DoublyLinkedListNode(1);
    DoublyLinkedListNode *two = new DoublyLinkedListNode(2);
    DoublyLinkedListNode *three = new DoublyLinkedListNode(3);
    one->next = two;
    two->prev = one;
    two->next = three;
    three->prev = two;
    // checking to see location of nodes in memory, iter++ doesnt work in
    // the while loop as memory is not contigous, its borrowed memory in the heap
    // each new keyword asks the heap for some free space
    // that  free space can be anywhere, not contigous
    std::cout << one << " " << two << " " << three << " " << std::endl;
    DoublyLinkedListNode *six = new DoublyLinkedListNode(6);
    addNode(two, six);
    DoublyLinkedListNode *iter = one;
    while (iter != nullptr)
    {
        std::cout << iter->val << std::endl;
        iter = iter->next;
    }
    std::cout<<"\n";
    deleteNode(six);
    iter = one;
    while (iter != nullptr)
    {
        std::cout << iter->val << std::endl;
        iter = iter->next;
    }

    return 0;
}
void addNode(DoublyLinkedListNode *node, DoublyLinkedListNode *nodeToAdd)
{
    DoublyLinkedListNode *prevN = node->prev;
    prevN->next = nodeToAdd;
    nodeToAdd->prev = prevN;
    nodeToAdd->next = node;
    node->prev = nodeToAdd;
}
void deleteNode(DoublyLinkedListNode *node)
{
    DoublyLinkedListNode *nodeBefore = node->prev;
    DoublyLinkedListNode *nodeAfter = node->next;
    nodeBefore->next = nodeAfter;
    nodeAfter->prev = nodeBefore;
    delete node;
};