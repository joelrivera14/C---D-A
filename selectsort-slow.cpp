#include <iostream>
#include <vector>

// return the min index in a vector
int minIndex(std::vector<int> arr);

// sort the vector
std::vector<int> sort(std::vector<int> arr);

void print(std::vector<int> v);
int main()
{
    std::vector<int> a = {3, 2, 1, 5, 6};
    print(a);
    a= sort(a);
    print(a);

    return 0;
}
int minIndex(std::vector<int> arr)
{
    int smallest = arr[0];
    int index = 0;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            index = i;
        }
    }
    return index;
}
std::vector<int> sort(std::vector<int> arr)
{
    int arrSize = arr.size();
    std::vector<int> newArr;
    for (int i = 0; i < arrSize; i++)
    {
        int smallest = minIndex(arr);
        newArr.push_back(arr[smallest]);
        arr.erase(arr.begin() + smallest);
    }
    return newArr;
}
void print(std::vector<int> v)
{
    for (int i : v)
        std::cout << i << " ";
    std::cout << "\n";
}