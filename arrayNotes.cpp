#include <iostream>

/*  what are arrays:
Arrays are fixed sized contigous data structures that can
have fast look up operations but slow insertion/erase operations
since they have to shift elements over.

Nice for storing elements/objects in order
*/

int main()
{
    // a maxtrix or a 2d-array
    const int rows = 8;
    const int columns = 10;
    int m[rows][columns] = {}; // 8 rows and 10 columns
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < rows; ++j)
            std::cout << m[i][j] << " ";
        std::cout << "\n";
    }
    std::cout << "\n";

    int a[rows] = {};

    return 0;
}