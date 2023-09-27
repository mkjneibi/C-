#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat("John", 50);
        std::cout << bureaucrat << std::endl;

        std::cout << "------------------------------------" << std::endl;

        // Create instances of the forms
        ShrubberyCreationForm shrubberyForm("Home");
        RobotomyRequestForm robotomyForm("Alice");
        PresidentialPardonForm presidentialForm("Bob");

        // Sign the forms
        shrubberyForm.beSigned(bureaucrat);
        robotomyForm.beSigned(bureaucrat);
        presidentialForm.beSigned(bureaucrat);

        std::cout << shrubberyForm << std::endl;
        std::cout << robotomyForm << std::endl;
        std::cout << presidentialForm << std::endl;

        std::cout << "------------------------------------" << std::endl;

        // Execute the forms
        bureaucrat.executeForm(shrubberyForm);
        bureaucrat.executeForm(robotomyForm);
        bureaucrat.executeForm(presidentialForm);

        std::cout << "------------------------------------" << std::endl;

        // Testing executeForm with an unsigned form
        ShrubberyCreationForm unsignedShrubberyForm("Garden");
        bureaucrat.executeForm(unsignedShrubberyForm);

        // Testing executeForm with a form that requires a higher grade
        Bureaucrat lowGradeBureaucrat("LowGrade", 10);
        robotomyForm.beSigned(lowGradeBureaucrat);
        lowGradeBureaucrat.executeForm(robotomyForm);

        std::cout << "------------------------------------" << std::endl;

    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
