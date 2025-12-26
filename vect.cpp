#include "vect.h"

Vect::Vect(int n) : data(new int[n]), size(n)
{
}
Vect::~Vect()
{
    delete[] data;
}