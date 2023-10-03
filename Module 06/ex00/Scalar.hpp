// Converter.hpp
#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <cstdlib> //random number generation, memory allocation, string conversion
#include <cmath> //mathematical operations
#include <cctype> //character handling
#include <sstream> //manipulate strings
#include <climits> //integer-related constants
#include <string>
#include <iomanip>  // Required for setting stream precision

class Scalar
{
    private:
        std::string m_literal; //to store the input literal that needs to be converted.

        //functions used to check if the stored m_literal
        //can be converted to char,int,flo,doub
        bool isChar() const;
        bool isInt() const;
        bool isFloat() const;
        bool isDouble() const;
        //printing the result of the conversions
        void printForChar(char c) const;
        void printForInt(int i) const;
        void printForFloat(float f) const;
        void printForDouble(double d) const;

    public:
        Scalar();
        Scalar(Scalar const &source);
        Scalar &operator=(Scalar const &data);
        ~Scalar();
        void setLiteral(std::string literal);
        void convert();
        void processConversion();
        // ^ performs the actual conversions and
        //prints the results based on the type of the stored m_literal
};

#endif