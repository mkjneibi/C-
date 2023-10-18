#include "MutantStack.hpp"
#include <iostream>
#include <list>

#define YELLOW  "\033[33m"
#define RESET   "\033[0m"

// int main()
// {
//     MutantStack<int> mutantStack;
//     for (int i = 1; i <= 5; ++i)
//     {
//         mutantStack.push(i);
//     }
//     std::cout << "Iterating through MutantStack in normal order:" << std::endl;
//     for (MutantStack<int>::iterator it = mutantStack.begin(); it != mutantStack.end(); ++it)
//     {
//         std::cout << *it << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);


    std::cout << YELLOW  << "List Test: " << RESET << std::endl;
    std::list<int> list;
    list.push_back(5);
    list.push_back(17);
    std::cout << list.back() << std::endl;
    list.pop_back();
    std::cout << list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);
    std::list<int>::iterator itList = list.begin();
    std::list<int>::iterator iteList = list.end();
    ++itList;
    --itList;
    while (itList != iteList)
    {
        std::cout << *itList << std::endl;
        ++itList;
    }

    std::cout << YELLOW  << "MutantStack Test: " << RESET << std::endl;

    MutantStack<int> testStack;
    testStack.push(5);
    testStack.push(10);
    testStack.push(520);

    MutantStack<int> testStack2(testStack);
    MutantStack<int>::iterator itTestStack = testStack2.begin();
    MutantStack<int>::iterator iteTestStack = testStack2.end();
    ++itTestStack;
    --itTestStack;
    while (itTestStack != iteTestStack)
    {
        std::cout << *itTestStack << std::endl;
        ++itTestStack;
    }

    return 0;
}

