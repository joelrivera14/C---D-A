#include <iostream>
#include <list>

/* An Iterator supports the ability to access a nodes element and also
    provides the ability to traverse through the container
*/

template <typename El>
class NodeList
{
private:
    struct Node
    {
        El e;
        Node<El> *prev;
        Node<El> *next;
    };

public:
    class Iterator
    {
    public:
        El &operator*()
        {
            return v->e;
        };
        bool operator==(const Iterator &b) const
        {
            return v == b.v;
        };
        bool operator!=(const Iterator &b) const
        {
            return v != b.v;
        };
        Iterator &operator++()
        {
            v = v->next;
            return *this;
        };
        Iterator &operator--()
        {
            v = v->prev;
            return *this;
        };
        friend class NodeList;

    private:
        Node<El> *v;
        Iterator(Node<El> *u)
        {
            v = u;
        };
    };

public:
    NodeList() : n(0), header(new Node), trailer(new Node)
    {
        header->next = trailer;
        trailer->prev = header;
    };
    NodeList(const NodeList &nL) {};            // copy constructor
    NodeList &operator=(const NodeList &nL) {}; // assignment operator
    ~NodeList() {};                             // destructor
    int size() const
    {
        return n;
    };
    bool empty() const
    {
        return n == 0;
    };
    Iterator begin() const
    {
        return Iterator(header->next);
    };
    Iterator end() const
    {
        return Iterator(trailer);
    };
    void insertFront(const El &element)
    {
        Node *n = new Node;
        n->e = element;
    };
    void insertBack(const El &e);
    void insert(const Iterator &p, const Elem &element);
    void eraseFront();
    void eraseBack();
    void erase(const Iterator &p);

private:
    int n;
    Node<El> *header;
    Node<El> *trailer; // sentinal node
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