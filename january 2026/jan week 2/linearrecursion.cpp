#include <iostream>

// linear recursion makes at most one function call when invoked
// includes a base case so that at the "bottom" of recursion, non-recursive
// computation is preformed and knows what to return

// tail recursion is when a function uses linear recursion and makes a recursive call as its
// very last operation
int factorial(int n);
int main()
{

    std::cout << factorial(5) << "\n";

    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return factorial(n - 1) * n;
}