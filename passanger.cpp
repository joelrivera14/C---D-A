#include "passanger.h"

Passanger::Passanger() : name("noName"), mealPref(NO_PREF), isFreqFlyer(false), freqFlyerNo("NONE")
{
}
Passanger::Passanger(const std::string &n, MealType mP, const std::string &fFN) : name(n), mealPref(mP), isFreqFlyer(fFN != "NONE"), freqFlyerNo(fFN)
{
}
Passanger::Passanger(const Passanger &p) : name(p.name), mealPref(p.mealPref), isFreqFlyer(p.isFreqFlyer), freqFlyerNo(p.freqFlyerNo)
{
}
bool Passanger::isFrequentFlyer() const
{
    return isFreqFlyer;
}
void Passanger::makeFreqFlyer(const std::string &newFreqFlyerNo)
{
    isFreqFlyer = true;
    freqFlyerNo = newFreqFlyerNo;
}