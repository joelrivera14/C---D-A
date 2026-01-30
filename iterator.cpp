#include <iostream>
#include <list>

/* An Iterator supports the ability to access a nodes element and also
    provides the ability to traverse through the container

    ALL STL containers return iterators that point to the respecitive elements when
    begin() or end()
    Begin() returns an iterator that points to the first element in the container
    end() returns an iterator that points just beyond the last element in the container
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
        for (Node *curr = nL.header->next; curr != nL.trailer; curr = curr->next)
        {
            insertBack(curr->e);
        }
    };
    NodeList &operator=(const NodeList &nL)
    {
        if (this == &nL)
        {
            return *this;
        }
        while (n > 0)
        {
            eraseBack();
        }
        for (Node *curr = nL.header->next; curr != nL.trailer; curr = curr->next)
        {
            insertBack(curr->e);
        }
        return *this;
    };
    ~NodeList()
    {
        while (!empty())
        {
            eraseBack();
        }
        delete header;
        delete trailer;
    };
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
        erase(Iterator(trailer->prev));
    };
    void erase(const Iterator &p)
    {
        Node *r = p.v;
        Node *m = r->prev;
        Node *o = r->next;
        m->next = o;
        o->prev = m;
        delete r;
        --n;
    };
    void print()
    {
        for (Node *n = header->next; n != trailer; n = n->next)
        {
            std::cout << n->e << " ";
        }
        std::cout << "\n";
    };

private:
    int n;
    Node *header;
    Node *trailer; // sentinal node
};

int sum(std::list<int> l)
{
    int total = 0;
    for (std::list<int>::iterator p = l.begin(); p != l.end(); ++p)
    {
        total += *p;
    }
    return total;
}
int main()
{
    std::list<int> i;
    i.push_back(4);
    i.push_back(5);
    i.push_back(6);
    i.push_back(4);
    std::cout << i.front() << "\n";
    std::cout << sum(i) << "\n";

    NodeList<int> L;
    L.insertBack(4);
    L.insertBack(5);
    L.insertBack(4);
    L.insertBack(3);
    L.print();

    return 0;
}