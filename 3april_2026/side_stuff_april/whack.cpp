#include <iostream>
using namespace std;

int main()
{
    int number = 1, max_num = 12, sum = 0, extra = 0;
    do
    {
        number++;
        if (number % 2 == 0)
        {
            if (number % 5 == 0)
            {
                break;
            }
            sum += number;
        }
        extra -= 4;
    } while (number <= max_num);
    cout << (3 % 5) << "\n";
    cout << number << " " << sum << " " << extra << "\n";
    return 0;
}