#include "geomProg.h"
#include "progression.h"

GeomProg::GeomProg(long b) : Progression(1), base(b) {}
long GeomProg::nextValue()
{
    cur *= base;
    return cur;
}