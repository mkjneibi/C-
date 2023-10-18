#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack<T>& other) : std::stack<T>(other) { }

        virtual ~MutantStack() {}
        MutantStack operator=(const MutantStack<T>& other) {
            if(this != &other)
                this->c = other.c;
			return *this;
        }

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() { return std::stack<T>::c.begin(); }
        iterator end() { return std::stack<T>::c.end(); }

};

#endif
