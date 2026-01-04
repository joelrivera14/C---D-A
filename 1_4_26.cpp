#include <iostream>
#include "progression.h"
#include "arithProg.h"
#include "geomProg.h"
#include "FibonacciProg.h"
#include "person.h"
#include "student.h"
#include <string>

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
    Person *pp[100];
    pp[0] = new Person("joel", "12-23");
    pp[1] = new Student("lom", "34-42", "CSIS", 2026);
    // dynamic casting allows us to use child memeber functions
    Student *sp = dynamic_cast<Student *>(pp[1]);
    sp->changeMajor("Comp Sci");
    return 0; // successful execution
}