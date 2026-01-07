#ifndef PROGRESSION_H
#define PROGRESSION_H

class Progression
{
public:
    Progression(long f = 0);
    virtual ~Progression() = default;
    void printProgression(int n);

protected:
    long first;
    long cur;
    virtual long firstValue();
    virtual long nextValue() = 0;
};

#endif