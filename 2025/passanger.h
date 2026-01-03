#ifndef PASSANGER_H
#define PASSANGER_H
#include <string>

enum MealType
{
    NO_PREF,
    REG,
    LOW_FAT,
    VEG
};

class Passanger
{
private:
    std::string name;
    MealType mealPref;
    bool isFreqFlyer;
    std::string freqFlyerNo;

public:
    Passanger();                                                                   // default constructor
    Passanger(const std::string &n, MealType mP, const std::string &fFN = "NONE"); // parameterized constructor
    Passanger(const Passanger &p);                                                 // copy constructor
    bool isFrequentFlyer() const;
    void makeFreqFlyer(const std::string &newFreqFlyerNo);
};

#endif