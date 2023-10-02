#include "Scalar.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Default destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    *this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
    if (this != &copy)
        return *this;
    return *this;
}

void ScalarConverter::convert(const std::string &value)
{
    if (value.length() == 1 && std::isprint(value[0]))
        charConversion(value);
    else
    {
        intConversion(value);
        floatConversion(value);
        doubleConversion(value);
    }
}

void ScalarConverter::charConversion(const std::string& value)
{
    char c = value[0];
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void ScalarConverter::intConversion(const std::string &value)
{
    char *endptr;
    long l = std::strtol(value.c_str(), &endptr, 10);

    if (*endptr == '\0')
    {
        int i = static_cast<int>(l);
        std::cout << "char: ";
        if (std::isprint(static_cast<char>(i)))
        {
            std::cout << "'" << static_cast<char>(i) << "'";
        }
        else
        {
            std::cout << "Non displayable" << std::endl;
            return;
        }
        std::cout << std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
    }
}

void ScalarConverter::floatConversion(const std::string& value)
{
    char *endptr;
    float f = std::strtof(value.c_str(), &endptr);

    if (*endptr == '\0')
    {
        std::cout << "char: ";
        if (std::isprint(static_cast<char>(f)))
            std::cout << "'" << static_cast<char>(f) << "'";
        else
        {
            std::cout << "Non displayable" << std::endl;
            return;
        }
        std::cout << "int: ";
        if (f >= INT_MIN && f <= INT_MAX)
            std::cout << static_cast<int>(f);
        else
            std::cout << "impossible" << std::endl;
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(f) << std::endl;
    }
}

void ScalarConverter::doubleConversion(const std::string& value)
{
    char* endptr;
    double d = std::strtod(value.c_str(), &endptr);

    if (*endptr == '\0')
    {
        std::cout << "char: ";
        if (std::isprint(static_cast<char>(d)))
            std::cout << "'" << static_cast<char>(d) << "'";
        else
        {
            std::cout << "Non displayable" << std::endl;
            return;
        }
        std::cout << "int: ";
        if (d >= INT_MIN && d <= INT_MAX)
            std::cout << static_cast<int>(d);
        else
            std::cout << "impossible" << std::endl;
        std::cout << "float: ";
        if (d >= -FLT_MAX && d <= FLT_MAX)
            std::cout << static_cast<float>(d) << "f";
        else
            std::cout << "impossible" << std::endl;
        std::cout << "double: " << d << std::endl;
    }
}

