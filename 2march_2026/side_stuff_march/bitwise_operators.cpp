#include <iostream>
#include <string>
#include <typeinfo>
int main()
{

    std::cout << (4 & 7) << "\n"; // 100 +
                                  // 0111
                                  // 0100 = 4

    std::cout << (10 << 1) << "\n";
    std::cout << (10 << 0) << "\n";
    std::cout << (0 << 1) << "\n";
    std::cout << (0 << 0) << "\n";
    std::cout << (10 << 1 | 1) << "\n"; // 10 << 2^n | 0001, '|' represents 'or'
                                        // this takes 10 * 2 plus 1 bits so...
                                        // 010100 +
                                        // 000001 == 010101 = 21
    std::string test = "";
    std::cout << "testing if this works, enter a sentence: ";
    getline(std::cin, test);
    int b = stoi(test);

    std::cout << b <<" "<<typeid(test).name()<< "\n";

    return 0;
}