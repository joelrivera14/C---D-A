#include <iostream>

struct Node
{
    Node(int val) : data(val), next(nullptr) {}
    int data;
    Node *next;
};

class Queue
{
};