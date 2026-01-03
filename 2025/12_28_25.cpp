#include <iostream>
#include <vector>
#include <string>

/*STL: Standard Template Library
a collection of useful classes for common data structures

Stack: a container that follows LIFO or FILO
Queue: a container that follows FIFO
Deque: a double-ended queue
Vector: a resizeable array
List: a doubly linked list
Priority Queue: a queue ordered by value
Set: a set (unique keys that are sorted)
Map: think dictionary, key-value pairs
*/

int main()
{
    // messing with vectors
    std::vector<int> intContainer(100);
    for (int i = 0; i < intContainer.size(); ++i)
    {
        intContainer[i] = i + 1;
        std::cout << intContainer[i];
    }
    std::cout << "\n";
    /*
    for-each loop or range based loop
    i: loop variable, copy of each element
    ":": represents "in" or "from"
    intContainer: container to interate over
    for each element i in the conatainer intConatainer */
    for (int i : intContainer)
    {
        std::cout << (i + 1) << " ";
    }
    std::cout << "\n";

    int index = intContainer.at(99);
    std::cout << index << "\n";

    std::string s1 = "helleo";
    std::cout << s1.find('e') << "\n";
    // find can also be used with character and index to search on or after
    std::cout << s1.find('e', 2) << "\n";
    std::cout << s1.insert(2, "e") << "\n";
    std::cout << s1.erase(1, 1) << "\n";
    std::cout << s1.erase(4, 1) << "\n";

    return 0;
}