#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat("John", 50);
        std::cout << bureaucrat << std::endl;

        Form form("Form 1", 60, 40);
        std::cout << form << std::endl;

        form.beSigned(bureaucrat);
        std::cout << "Form signed? " << (form.isSigned() ? "Yes" : "No") << std::endl;

        bureaucrat.incrementGrade();
        form.beSigned(bureaucrat); // Should not be signed

    }
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
