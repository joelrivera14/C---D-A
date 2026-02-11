#include <iostream>
using namespace std;

int main()
{
    int day;
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
        cout << "you work monday" << "\n";
        break;
    case 2:
        cout << "you work tuesday" << "\n";
        break;
    case 3:
        cout << "you work wednesday" << "\n";
        break;
    case 4:
        cout << "you work thursday" << "\n";
        break;
    case 5:
        cout << "you work friday" << "\n";
        break;
    default:
        break;
    }
    return 0;
}