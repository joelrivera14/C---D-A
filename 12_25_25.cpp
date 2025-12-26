#include <iostream>
#include "counter.h"


struct Person{
    std::string name;
    int age;
};
bool operator==(const Person& a, const Person& b){
    return a.name == b.name
            && a.age == b.age;
}

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

    /*switch statements
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
    }*/

    /*for loops
    const int num = 100;
    double be[num]={};
    for(int i = 0; i<num;++i){
        std::cout<<be[i]<<" ";
    }*/

    //operator overloading
    Person p1{"joel",24};
    Person p2{"jol",24};
    std::cout<<(p1 == p2)<<std::endl;

    Counter c1;
    std::cout<<c1.getCount()<<std::endl;
    c1.increaseBy(90);
    std::cout<<c1.getCount()<<std::endl;


    return 0;
}