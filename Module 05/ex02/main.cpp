#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        std::cout << "------------------------------------" << std::endl;
        Bureaucrat bureaucrat("John", 50);
        std::cout << bureaucrat << std::endl;

        std::cout << "------------------------------------" << std::endl;
        try
        {
            ShrubberyCreationForm shrubberyForm("Home");
            shrubberyForm.beSigned(bureaucrat);
            std::cout << shrubberyForm << std::endl;
            shrubberyForm.execute(bureaucrat);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        std::cout << "------------------------------------" << std::endl;
        try
        {
            RobotomyRequestForm robotomyForm("Alice");
            robotomyForm.beSigned(bureaucrat);
            std::cout << robotomyForm << std::endl;
            robotomyForm.execute(bureaucrat);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        std::cout << "------------------------------------" << std::endl;
        try
        {
            PresidentialPardonForm presidentialForm("Bob");
            presidentialForm.beSigned(bureaucrat);
            std::cout << presidentialForm << std::endl;
            presidentialForm.execute(bureaucrat);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        std::cout << "------------------------------------" << std::endl;
        try
        {
            // Testing executeForm with an unsigned form
            ShrubberyCreationForm unsignedShrubberyForm("Garden");
            bureaucrat.executeForm(unsignedShrubberyForm);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            Bureaucrat lowGradeBureaucrat("LowGrade", 10);
            std::cout << lowGradeBureaucrat << std::endl;
            RobotomyRequestForm robotomyForm("LowGrade");
            robotomyForm.beSigned(lowGradeBureaucrat);
            lowGradeBureaucrat.executeForm(robotomyForm);
            std::cout << "------------------------------------" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
