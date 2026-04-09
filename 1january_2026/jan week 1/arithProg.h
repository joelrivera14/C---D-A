#ifndef ARITHPROG_H
#define ARITHPROG_H
#include "progression.h"

class ArithProg : public Progression
{
public:
    ArithProg(long i = 1);

protected:
    long inc;
    long nextValue() override;
};

#endif