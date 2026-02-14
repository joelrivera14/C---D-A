#include <iostream>

struct Node
{
    Entry entry;
    Node *parent;
    Node *left;
    Node *right;

    Node(const Entry &e)
        : entry(e), parent(nullptr), left(nullptr), right(nullptr) {}
};
