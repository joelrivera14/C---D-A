#include <iostream>

int main(){

    /*Static casting is used when a conversion is made between two related types, for
    example numbers to numbers or pointers to pointers.
    Explicit casting*/
    double d = 3.999;
    int a = static_cast<int>(d);
    
    std::cout<<(a)<<std::endl;

    return 0;
}