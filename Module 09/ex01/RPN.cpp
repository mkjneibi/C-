#include "RPN.hpp"


RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &copy)
{
    *this = copy;
}

RPN &RPN::operator=(const RPN &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

int RPN::calculate(const std::string &expression)
{
    std::stack<int> stack;

    std::istringstream iss(expression);
    std::string token;
    while (iss >> token)
    {
        if (token == "+")
        {
            if (stack.size() < 2)
                throw std::runtime_error("Invalid expression");
            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();
            stack.push(operand1 + operand2);
        }
        else if (token == "-")
        {
            if (stack.size() < 2)
                throw std::runtime_error("Invalid expression");
            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();
            stack.push(operand1 - operand2);
        }
        else if (token == "*")
        {
            if (stack.size() < 2)
                throw std::runtime_error("Invalid expression");
            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();
            stack.push(operand1 * operand2);
        }
        else if (token == "/")
        {
            if (stack.size() < 2)
                throw std::runtime_error("Invalid expression");
            int operand2 = stack.top();
            stack.pop();
            if (operand2 == 0)
                throw std::runtime_error("Division by zero");
            int operand1 = stack.top();
            stack.pop();
            stack.push(operand1 / operand2);
        }
        else
        {
            int number = std::atoi(token.c_str());
            if (number < 0 || number > 9)
                throw std::runtime_error("Invalid number in expression");
            stack.push(number);
        }
    }
    if (stack.size() != 1)
        throw std::runtime_error("Invalid expression");
    return stack.top();
}

