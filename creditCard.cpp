#include "creditCard.h"

CreditCard::CreditCard(const std::string &n, const std::string &nm, int l, double b) : no(n), name(nm), limit(l), balance(b)
{
}
bool CreditCard::chargeIt(double price)
{
    if (price + balance > limit)
    {
        return false;
    }
    balance += price;
    return true;
}
void CreditCard::makePayment(double payment)
{
    balance -= payment;
}
std::ostream &operator<<(std::ostream &out, const CreditCard &c)
{
    out << c.getNo() << " "
        << c.getName() << " "
        << c.getBalance() << " "
        << c.getLimit() << "\n";
    return out;
}