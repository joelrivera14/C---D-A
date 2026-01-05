#include "gameEntry.h"

GameEntry::GameEntry(const std::string &n, int s) : name(n), score(s) {}
int GameEntry::getScore() const
{
    return score;
}
std::string GameEntry::getName() const
{
    return name;
}