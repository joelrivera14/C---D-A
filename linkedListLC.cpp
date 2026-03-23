#include <iostream>

// define this outside the main function so that its not limited to main scope
// and its globally accessible
struct LinkedListNode
{
    int val;
    LinkedListNode *next;
    LinkedListNode(int v) : val(v), next(nullptr) {}
};

int addSum(LinkedListNode *head);
int main()
{

    LinkedListNode *one = new LinkedListNode(1);
    LinkedListNode *two = new LinkedListNode(2);
    LinkedListNode *three = new LinkedListNode(3);
    one->next = two;
    two->next = three;
    LinkedListNode *head = one;

    std::cout << head->val << std::endl;
    std::cout << head->next->val << std::endl;
    std::cout << two->next->val << std::endl;
    //adding the sum function
    std::cout<<addSum(head)<<std::endl;

    return 0;
}
int addSum(LinkedListNode *head) {
    int sum = 0;
    while(head != nullptr){
        sum += head->val;
        head = head->next;
    }
    return sum;
}