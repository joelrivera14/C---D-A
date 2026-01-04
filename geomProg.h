#ifndef GEOMPROG_H
#define GEOMPROG_H
#include "progression.h"

class GeomProg : public Progression
{
public:
    GeomProg(long b = 2);

protected:
    long base;
    long nextValue() override;
};

#endif