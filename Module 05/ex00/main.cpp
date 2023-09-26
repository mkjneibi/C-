#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("John", 150);
        Bureaucrat b2("Alice", 1);
        // Bureaucrat b3(b1);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        // std::cout << b3 << std::endl;

        b1.incrementGrade();
        b2.decrementGrade();

        std::cout << "------------------------------------" << std::endl;

        std::cout << "After grade changes:" << std::endl;
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;

        Bureaucrat invalid_B("Invalid", 200);
        std::cout << invalid_B << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "------------------------------------" << std::endl;
        std::cerr << "An exception occurred: " << e.what() << std::endl;
    }
    return 0;
}
