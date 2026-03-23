#include <iostream>

int main()
{
    struct LinkedListNode
    {
        int val;
        LinkedListNode *next;
        LinkedListNode(int v) : val(v), next(nullptr) {}
    };

    LinkedListNode *one = new LinkedListNode(1);
    LinkedListNode *two = new LinkedListNode(2);
    LinkedListNode *three = new LinkedListNode(3);
    one->next = two;
    two->next = three;
    LinkedListNode* head = one;

    std::cout << head->val << std::endl;
    std::cout << head->next->val << std::endl;
    std::cout << two->next->val << std::endl;

    return 0;
}