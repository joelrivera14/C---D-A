#ifndef VECT_H
#define VECT_H

/*Every class that allocates its own objects using new should:
• Define a destructor to free any allocated objects.
• Define a copy constructor, which allocates its own newmember storage
and copies the contents of member variables.
• Define an assignment operator, which deallocates old storage, allocates
new storage, and copies all member variables.*/

class Vect
{
private:
    int *data;
    int size;

public:
    Vect(int n);                    // defualt constructor
    Vect(const Vect &v);            // copy constructor
    Vect &operator=(const Vect &v); // assignment operator
    ~Vect();
};

#endif