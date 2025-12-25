#include <iostream>

int main(){

    /*Static casting is used when a conversion is made between two related types, for
    example numbers to numbers or pointers to pointers.
    Explicit casting*/
    double d = 3.999;
    int a = static_cast<int>(d);
    std::cout<<(a)<<std::endl;

    //Implicit Casting
    double t = 2.3456;
    int b = t;
    std::cout<<(b)<<std::endl;

    //switch statements
    int x;
    std::cout<<"Enter a number: ";
    std::cin>>x;
    switch(x){
        case 1:
        std::cout<<"pelp"<<std::endl;
        break;
        default:
        std::cout<<"meh"<<std::endl;
        break;
    }

    //for loops
    const int num = 100;
    double be[num]={};
    for(int i = 0; i<num;++i){
        std::cout<<be[i]<<" ";
    }

    return 0;
}