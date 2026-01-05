#ifndef GAMEENTRY_H
#define GAMEENTRY_H
#include <string>

class GameEntry
{
public:
    GameEntry(const std::string &n = "", int s = 0);
    int getScore() const {};
    std::string getName() const {};

private:
    int score;
    std::string name;
};

#endif