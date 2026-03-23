#include <iostream>
struct DoublyLinkedListNode
{
    int val;
    DoublyLinkedListNode *prev;
    DoublyLinkedListNode *next;
    DoublyLinkedListNode(int v) : val(v), prev(nullptr), next(nullptr) {}
};

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
    DoublyLinkedListNode *iter = one;
    while (iter != nullptr)
    {
        std::cout << iter->val << std::endl;
        iter = iter->next;
    }

    return 0;
}