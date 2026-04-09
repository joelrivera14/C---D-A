#include <iostream>

struct SDLLN
{
    int val;
    SDLLN *prev;
    SDLLN *next;
    SDLLN(int v) : val(v), prev(nullptr), next(nullptr) {}
};

void addToEnd(SDLLN *nodeToAdd, SDLLN *trailer);
void addToBeginning(SDLLN *nodeToAdd, SDLLN *header);
void removeFromEnd(SDLLN *header, SDLLN *trailer);
void removeFromBegin(SDLLN *header, SDLLN *trailer);

int main()
{
    SDLLN *header = new SDLLN(-1);
    SDLLN *trailer = new SDLLN(-1);
    header->next = trailer;
    trailer->prev = header;

    SDLLN *iter = header;
    SDLLN *addThis = new SDLLN(3);
    while (iter != nullptr)
    {
        std::cout << iter->val << " ";
        iter = iter->next;
    }
    std::cout << "\n";

    addToEnd(addThis, trailer);
    iter = header->next;
    while (iter != trailer)
    {
        std::cout << iter->val << " ";
        iter = iter->next;
    }
    std::cout << "\n";

    return 0;
}
void addToEnd(SDLLN *nodeToAdd, SDLLN *trailer)
{
    nodeToAdd->next = trailer;
    trailer->prev->next = nodeToAdd;
    nodeToAdd->prev = trailer->prev;
    trailer->prev = nodeToAdd;
}
void addToBeginning(SDLLN *nodeToAdd, SDLLN *header)
{
    header->next->prev = nodeToAdd;
    nodeToAdd->next = header->next;
    header->next = nodeToAdd;
    nodeToAdd->prev = header;
}
void removeFromEnd(SDLLN *header, SDLLN *trailer)
{
    if (header->next == trailer)
    {
        return;
    }
    SDLLN *lastNode = trailer->prev;
    trailer->prev = lastNode->prev;
    lastNode->prev->next = trailer;
    delete lastNode;
}
void removeFromBegin(SDLLN *header, SDLLN *trailer)
{
    if (header->next == trailer)
    {
        return;
    }
    SDLLN *firstNode = header->next;
    header->next = firstNode->next;
    firstNode->next->prev = header;
    delete firstNode;
}