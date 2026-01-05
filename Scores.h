#ifndef SCORES_H
#define SCORES_H
#include "gameEntry.h"
#include <ostream>

class Scores
{
public:
    Scores(int maxE = 10);
    ~Scores();
    void add(const GameEntry &e);
    GameEntry remove(int i);
    friend std::ostream &operator<<(std::ostream &out, const Scores &s);

private:
    int maxEntries;
    int numEntries;
    GameEntry *entries;
};

#endif