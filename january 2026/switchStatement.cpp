#include <iostream>
using namespace std;

int main()
{
    /*ex1:

    int day;
    string dayoff = "";
    cout << "select dayoff" << "\n";
    cout << "1 monday" << "\n";
    cout << "2 tuesday" << "\n";
    cout << "3 wednesday" << "\n";
    cout << "4 thursday" << "\n";
    cout << "5 friday" << "\n";
    cin >> day;

    switch (day)
    {
    case 1:
        dayoff = "monday";
        break;
    case 2:
        dayoff = "tuesday";
        break;
    case 3:
        dayoff = "wednesday";
        break;
    case 4:
        dayoff = "thursday";
        break;
    case 5:
        dayoff = "friday";
        break;
    default:
        break;
    }

    cout<<"your day off is "<<dayoff<<"\n";
    */
    /*ex2
    char g = ' ';

    cout << "pick a gender" << "\n";
    cout << "m for male" << "\n";
    cout << "f for female" << "\n";
    cout << "o for other" << "\n";
    cin >> g;

    switch (g)
    {
    case 'm':
    case 'M':
        cout << "male" << "\n";
        break;
    case 'f':
    case 'F':
        cout << "female" << "\n";
        break;
    case 'o':
    case 'O':
        cout << "other" << "\n";
        break;
    default:
        break;
    }*/
    // lab exercise
    int first = 0, second = 0;
    char op = ' ';
    cout << "input a two numbers and select an operation" << "\n";
    cout << "+ for addition" << "\n";
    cout << "- for subtraction" << "\n";
    cout << "* for multiplication" << "\n";
    cout << "/ for division " << "\n";
    cout << "% for remainder " << "\n";
    cin >> first >> second >> op;

    switch (op)
    {
    case '+':
        cout << (first + second) << "\n";
        break;
    case '-':
        cout << (first - second) << "\n";
        break;
    case '*':
        cout << (first * second) << "\n";
        break;
    case '/':
        cout << (first / second) << "\n";
        break;
    case '%':
        cout << (first % second) << "\n";
        break;

    default:
        break;
    }

    return 0;
}