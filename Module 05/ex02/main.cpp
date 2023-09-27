#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("John", 50);
        std::cout << bureaucrat << std::endl;

        std::cout << "------------------------------------" << std::endl;

        // Create instances of the forms
        ShrubberyCreationForm shrubberyForm("Home");
        RobotomyRequestForm robotomyForm("Alice");
        PresidentialPardonForm pardonForm("Bob");

        // Sign the forms
        shrubberyForm.beSigned(bureaucrat);
        robotomyForm.beSigned(bureaucrat);
        pardonForm.beSigned(bureaucrat);

        std::cout << shrubberyForm << std::endl;
        std::cout << robotomyForm << std::endl;
        std::cout << pardonForm << std::endl;

        std::cout << "------------------------------------" << std::endl;

        // Execute the forms
        shrubberyForm.execute(bureaucrat);
        robotomyForm.execute(bureaucrat);
        pardonForm.execute(bureaucrat);

        std::cout << "------------------------------------" << std::endl;

    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
