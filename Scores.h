#ifndef SCORES_H
#define SCORES_H
#include "gameEntry.h"

class Scores
{
public:
    Scores(int maxE = 10);
    ~Scores();
    void add(const GameEntry &e);
    GameEntry remove(int i);

private:
    int maxEntries;
    int numEntries;
    GameEntry *entries;
};

#endif