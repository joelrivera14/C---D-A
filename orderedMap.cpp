#include <iostream>
#include <map>

/*ordered maps:
    an order relation is kept for the keys of the map
    we can use a comparator to provide an order relation among keys
    allows us to define the ordered map relative to the comparator
    can be provided to the ordered map as an argument to its constructor
    in order to indicate that an object is not present, the class provides
    a special sentinel iterator called end
    */
/* ordered search tables:
    basically an ordered vector implementation of map
    the space requirement is o(n)
    performing insert operatons takes o(n) bc we need to shift up
    all the elements with a key greater than k to make room for entry(k,v)
    similar with erase operation since all elements greater than k need
    to shift left to close the hole of the removed entry
    search table implementation is inferior to linked list implementation
    in terms of the worst-case running times of the map update operations
    However, does perform find function much faster in search table
    */
/* binary search:
    advantage of using an ordered vector L to implement a map with
    n entries is that accessing an element of L by its index takes o(1)
    */

int main()
{

    return 0;
}