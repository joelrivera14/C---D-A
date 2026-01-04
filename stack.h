#ifndef STACK_H
#define STACK_H

// an abstract class serves as only a base class for inheritance
// cannot be used to create instances directly

class Stack
{
public:
    // pure virtual functions let compiler know this is an abstract class and cannot be instantiated
    // pointers of this class can still be instantiated, just not objects
    virtual bool isEmpty() const = 0;
    virtual void push(int x) = 0;
    virtual int pop() = 0;
};

#endif