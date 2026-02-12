#include <iostream>
#include <stack>
#include <string>
#include "arraystack.h"

// a stack follows a First-in-last-out (FILO)
// underlying structure is a deque -> std::stack<T, std::deque<T>>
// can change from deque to another structure that supports its functions
int main()
{
    std::stack<int> s;
    s.push(4);
    s.push(3);
    s.pop();
    std::cout << s.top() << "\n";
    std::cout << s.empty() << "\n";
    std::cout << s.size() << "\n";
    std::cout << "\n";

    ArrayStack<int> d;
    d.push(3);
    d.push(2);
    std::cout << d.top() << "\n";
    std::cout << d.empty() << "\n";
    std::cout << d.size() << "\n";
    std::cout << "\n";

    ArrayStack<std::string> a;
    a.push("hello");
    a.push("world");
    std::cout << a.top() << "\n";
    std::cout << a.empty() << "\n";
    std::cout << a.size() << "\n";
    std::cout << "\n";

    return 0;
}