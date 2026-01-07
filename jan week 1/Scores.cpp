#include "Scores.h"
#include <stdexcept>

Scores::Scores(int maxE) : maxEntries(maxE), numEntries(0), entries(new GameEntry[maxE]) {}
Scores::~Scores()
{
    delete[] entries;
}
void Scores::add(const GameEntry &e)
{
    int newScore = e.getScore();
    if (numEntries == maxEntries)
    {
        if (newScore <= entries[maxEntries - 1].getScore())
        {
            return;
        }
    }
    else
        ++numEntries;
    int i = numEntries - 2;
    while (i >= 0 && newScore > entries[i].getScore())
    {
        entries[i + 1] = entries[i];
        --i;
    }
    entries[i + 1] = e;
}
GameEntry Scores::remove(int i)
{
    if (i < 0 || i >= numEntries)
        throw std::out_of_range("Invalid index");
    GameEntry e = entries[i];
    for (int j = i + 1; j < numEntries; ++j)
    {
        entries[j - 1] = entries[j];
    }
    numEntries--;
    return e;
}
std::ostream &operator<<(std::ostream &out, const Scores &s)
{
    for (int i = 0; i < s.numEntries; ++i)
    {
        out << s.entries[i].getName() << " "
            << s.entries[i].getScore() << "\n";
    }
    return out;
}