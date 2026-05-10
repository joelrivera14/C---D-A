#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <typename E>

class List
{
public:
    struct ListNode
    {
        E val;
        ListNode *next;
        ListNode(E v, ListNode *n = nullptr) : val(v), next(n) {}
    };
    List() : head(nullptr) {}
    List(E val) : head(new ListNode(val)) {}
    List(const List &b) : head(nullptr)
    {
        if (b.head == nullptr)
            return;
        head = new ListNode(b.head->val);
        ListNode *curr = head;
        ListNode *otherCurr = b.head->next;
        while (otherCurr != nullptr)
        {
            curr->next = new ListNode(otherCurr->val);
            curr = curr->next;
            otherCurr = otherCurr->next;
        }
    }
    List &operator=(const List &b)
    {
        if (this == &b)
            return *this;
        ListNode *node = head;
        while (node)
        {
            ListNode *temp = node;
            node = node->next;
            delete temp;
        }
        head = nullptr;
        if (b.head == nullptr)
        {
            return *this;
        }
        head = new ListNode(b.head->val);
        ListNode *current = head;
        ListNode *other = b.head->next;
        while (other)
        {
            current->next = new ListNode(other->val);
            current = current->next;
            other = other->next;
        }
        return *this;
    }
    void push_front(int val)
    {
    }

private:
    ListNode *head;
};

#endif