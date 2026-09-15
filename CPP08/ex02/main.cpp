#include "MutantStack.hpp"
#include <iostream>

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    std::cout << "Stack elements:" << std::endl;
    for (auto it = mstack.begin(); it != mstack.end(); ++it)
        std::cout << *it << std::endl;
    
    std::cout << "\nTop: " << mstack.top() << std::endl;
    std::cout << "Size: " << mstack.size() << std::endl;
    
    mstack.pop();
    std::cout << "After pop - Top: " << mstack.top() << std::endl;
    
    return 0;
}