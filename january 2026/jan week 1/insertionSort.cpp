#include <iostream>

void insertionSort(int *r, int n);

int main()
{

    int n = 9;
    int *c = new int[n]{1, 2, 4, 3, 5, 2, 8, 2323, 1};
    for (int i = 0; i < n; ++i)
    {
        std::cout << c[i] << " ";
    }
    std::cout << "\n";

    insertionSort(c, n);

    for (int i = 0; i < n; ++i)
    {
        std::cout << c[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
void insertionSort(int *c, int n)
{
    int i, curr, j;
    for (i = 1; i < n; ++i)
    {
        curr = c[i];
        j = i - 1;
        while ((j >= 0) && c[j] > curr)
        {
            c[j + 1] = c[j];
            --j;
        }
        c[j + 1] = curr;
    }
}