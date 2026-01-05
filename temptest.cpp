#include <iostream>
class Object
{
public:
    virtual void printMe() = 0;
};
class Place : public Object
{
public:
    virtual void printMe() { std::cout << "Buy it.\n"; }
};
class Region : public Place
{
public:
    virtual void printMe() { std::cout << "Box it.\n"; }
};
class State : public Region
{
public:
    virtual void printMe() { std::cout << "Ship it.\n"; }
};
class Maryland : public State
{
public:
    virtual void printMe() { std::cout << "Read it.\n"; }
};
int main()
{
    Region *mid = new State;
    State *md = new Maryland;
    Object *obj = new Place;
    Place *usa = new Region;
    md->printMe();
    mid->printMe();
    (dynamic_cast<Place *>(obj))->printMe();
    obj = md;
    (dynamic_cast<Maryland *>(obj))->printMe();
    obj = usa;
    (dynamic_cast<Place *>(obj))->printMe();
    usa = md;
    (dynamic_cast<Place *>(usa))->printMe();
    return 0;
}