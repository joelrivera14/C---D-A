#include <iostream>
#include "progression.h"
#include "arithProg.h"
#include "geomProg.h"
#include "FibonacciProg.h"

int main()
{
    Progression *prog;
    // test ArithProgression
    std::cout << "Arithmetic progression with default increment:\n";
    prog = new ArithProg();
    prog->printProgression(10);
    delete prog;
    std::cout << "Arithmetic progression with increment 5:\n";
    prog = new ArithProg(5);
    prog->printProgression(10);
    delete prog;
    // test GeomProgression
    std::cout << "Geometric progression with default base:\n";
    prog = new GeomProg();
    prog->printProgression(10);
    delete prog;
    std::cout << "Geometric progression with base 3:\n";
    prog = new GeomProg(3);
    prog->printProgression(10);
    delete prog;
    // test FibonacciProgression
    std::cout << "Fibonacci progression with default start values:\n";
    prog = new FibonacciProg();
    prog->printProgression(10);
    delete prog;
    std::cout << "Fibonacci progression with start values 4 and 6:\n";
    prog = new FibonacciProg(4, 6);
    prog->printProgression(10);
    delete prog;
    return 0; // successful execution
}