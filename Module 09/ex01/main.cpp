#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " \"RPN Expression\"" << std::endl;
        return 1;
    }
    std::string expression = argv[1];
    RPN calculator;
    try
    {
        int result = calculator.calculate(expression);
        std::cout << result << std::endl;
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    return 0;
}

