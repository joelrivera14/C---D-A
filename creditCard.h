#ifndef CREDITCARD_H
#define CREDITCARD_H
#include <string>
#include <iostream>

/*Source files: function defintions
  Header files: store declarations
  typically both files are combined into one program by a system program called a linker
  Statements beginning with # are handled by a special program called the preprocessor,
  which is invoked automatically by the compiler.
*/
/*#ifndef, #define and #endif are used to keep the same header file from being expanded twice.*/

class CreditCard
{
private:
  std::string no;
  std::string name;
  int limit;
  double balance;

public:
  CreditCard(const std::string &n, const std::string &nm, int l, double b = 0);
  std::string getNo() const { return no; } // inline function, short and concise
  std::string getName() const { return name; }
  int getLimit() const { return limit; }
  double getBalance() const { return balance; }
  bool chargeIt(double price);
  void makePayment(double payment);
};
// non-member function, doesnt use friend bc can use accessor functions instead of private members directly
std::ostream &operator<<(std::ostream &out, const CreditCard &c);
#endif