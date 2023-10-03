
// Converter.cpp
#include "Scalar.hpp"

Scalar::Scalar() {}

Scalar::Scalar(Scalar const &source)
{
    *this = source;
}

Scalar &Scalar::operator=(Scalar const &data)
{
    if (this != &data)
        this->m_literal = data.m_literal;
    return *this;
}

Scalar::~Scalar() {}

 //function to set the value of m_literal with the input string
void Scalar::setLiteral(std::string literal)
{
    this->m_literal = literal;
}

//converting the stored m_literal into different data types (convertion process)
void Scalar::convert()
{
    std::cout << "Scalar::convert" << std::endl;
    std::cout << m_literal << std::endl;
    if (m_literal == "0")
        printForInt(0);
    else if(isChar())
        printForChar(m_literal[0]);
    else if(isInt())
        printForInt(std::atoi(m_literal.c_str()));
    else if(isFloat())
        printForFloat(std::atof(m_literal.c_str()));
    else if(isDouble())
        printForDouble(std::atof(m_literal.c_str()));
    else
        std::cerr << "Invalid Literal" << std::endl;
}

void Scalar::processConversion()
{
    if (this->isInt())
        this->printForInt(std::stoi(this->m_literal));
    else if (this->isFloat())
        this->printForFloat(std::stof(this->m_literal));
    else if (this->isDouble())
        this->printForDouble(std::stod(this->m_literal));
    else if (this->isChar())
        this->printForChar(this->m_literal[0]);
    else
        std::cerr << "Error: The provided literal does not match any expected formats." << std::endl;
}


bool Scalar::isChar() const
{
    return m_literal.size() == 1 && std::isprint(m_literal[0]) && !std::isdigit(m_literal[0]);
}

bool Scalar::isInt() const
{
    char *endptr;
    long val = std::strtol(m_literal.c_str(), &endptr, 10);
    if (val == 0 && m_literal == "0")
        return true;
    return *endptr == '\0';
}


bool Scalar::isFloat() const
{
    size_t len = m_literal.length();
    if (len == 0) return false;

    // Check for special float literals
    if (m_literal == "-inff" || m_literal == "+inff" || m_literal == "nanf")
        return true;

    // Check if it ends with 'f'
    if (m_literal[len - 1] != 'f' && m_literal[len - 1] != 'F')
        return false;

    // For simplicity, we'll just check the rest of the string using strtod. If it's a valid number, we consider it a float
    char* endptr;
    std::strtod(m_literal.c_str(), &endptr);

    return *endptr == 'f' || *endptr == 'F';
}

bool Scalar::isDouble() const
{
    // Check for special double literals
    if (m_literal == "-inf" || m_literal == "+inf" || m_literal == "nan")
        return true;

    char* endptr;
    std::strtod(m_literal.c_str(), &endptr);

    return *endptr == '\0';
}

void Scalar::printForChar(char c) const
{
    std::cout << "char: ";
    if (std::isprint(c))
        std::cout << "'" << c << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void Scalar::printForInt(int i) const
{
    std::cout << "char: ";
    if (i == 0)
        std::cout << "Non displayable" << std::endl;
    else if (i >= 32 && i <= 126) // Printable ASCII range
        std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void Scalar::printForFloat(float f) const
{
    std::cout << "char: ";
    int i = static_cast<int>(f);
    if (i >= 32 && i <= 126)  // Printable ASCII range
        std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
    else
        std::cout << "impossible" << std::endl;
    std::cout << "int: ";
    if (f < INT_MIN || f > INT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << i << std::endl;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void Scalar::printForDouble(double d) const
{
    std::cout << "char: ";
    int i = static_cast<int>(d);
    if (i >= 32 && i <= 126) // Printable ASCII range
        std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
    else
        std::cout << "impossible" << std::endl;
    std::cout << "int: ";
    if (d < INT_MIN || d > INT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << i << std::endl;
    std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}
