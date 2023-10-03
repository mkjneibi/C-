#include "Scalar.hpp"
#include <iostream>

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./convert <literal>" << std::endl;
        return 1;
    }
    Scalar scalar;
    std::string input = argv[1];
    scalar.setLiteral(input);
    scalar.processConversion();
    return 0;
}
