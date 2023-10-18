#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mutantStack;
    for (int i = 1; i <= 5; ++i)
    {
        mutantStack.push(i);
    }
    std::cout << "Iterating through MutantStack in normal order:" << std::endl;
    for (MutantStack<int>::iterator it = mutantStack.begin(); it != mutantStack.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "Iterating through MutantStack in reverse order:" << std::endl;
    for (MutantStack<int>::reverse_iterator rit = mutantStack.rbegin(); rit != mutantStack.rend(); ++rit)
    {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;
    return 0;
}

//////////////////////// 42 Test //////////////////////////
// int main()
// {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << mstack.size() << std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]
//     mstack.push(0);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//     std::cout << *it << std::endl;
//     ++it;
//     }
//     std::stack<int> s(mstack);
//     return 0;
// }