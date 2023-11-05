#ifndef RNP_HPP
#define RNP_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <stdexcept>

class RPN
{
    public:
        RPN();
        ~RPN();
        RPN(const RPN &copy);
        RPN &operator=(const RPN &copy);
        int calculate(const std::string &expression);
};

#endif