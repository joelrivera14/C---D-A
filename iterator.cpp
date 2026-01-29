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
        Node *prev;
        Node *next;
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
        Node *v;
        Iterator(Node *u)
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
    NodeList(const NodeList &nL)
    {
        /*
        copy constructor plan
        Create empty list with sentinels
        Walk through nL
        Insert each element at the back
         */
        header = new Node;
        trailer = new Node;
        header->next = trailer;
        trailer->prev = header;
    };
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
        insert(begin(), element);
    };
    void insertBack(const El &element)
    {
        insert(end(), element);
    };
    void insert(const Iterator &p, const El &element)
    {
        Node *w = p.v;
        Node *u = w->prev;
        Node *v = new Node;
        v->e = element;
        v->prev = u;
        v->next = w;
        u->next = v;
        w->prev = v;
        ++n;
    };
    void eraseFront()
    {
        erase(begin());
    };
    void eraseBack()
    {
        erase(end());
    };
    void erase(const Iterator &p)
    {
        Node *n = p->v;
        Node *m = n->prev;
        Node *o = n->next;
        m->next = o;
        o->prev = m;
        delete n;
        --n;
    };

private:
    int n;
    Node *header;
    Node *trailer; // sentinal node
};

int main()
{
    std::list<int> i;
    i.push_back(4);
    i.push_back(5);
    i.push_back(6);
    i.push_back(4);
    std::cout << i.front() << "\n";

    NodeList L;
    return 0;
}