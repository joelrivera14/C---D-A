#include <iostream>
using namespace std;

int main()
{
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
    return 0;
}