#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <climits>
#include <cfloat>

class ScalarConverter
{
    private:
        static void charConversion(const std::string& value);
        static void intConversion(const std::string& value);
        static void floatConversion(const std::string& value);
        static void doubleConversion(const std::string& value);

    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &copy);
        static void convert(const std::string& value);
};

#endif
