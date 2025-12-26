#ifndef VECT_H
#define VECT_H

class Vect
{
private:
    int *data;
    int size;

public:
    Vect(int n);
    ~Vect();
};

#endif