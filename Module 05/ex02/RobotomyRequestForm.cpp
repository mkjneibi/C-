#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("Robotomy Request Form", 72, 45), target(target) {
    std::srand(std::time(0)); // Seed for random number generator
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    if (!isSigned())
        throw NotSignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();

    std::cout << "* Drilling noises *" << std::endl;
    if (std::rand() % 2 == 0)
    {
        std::cout << target << " has been robotomized successfully!" << std::endl;
    }
    else
    {
        std::cout << "Robotomy for " << target << " failed." << std::endl;
    }
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
    std::cout << "RRF copy constructor called" << std::endl;
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    std::cout << "RRF assignment operator called" << std::endl;
    if (this != &copy)
    {
        AForm::operator=(copy);
        target = copy.target;
    }
    return (*this);
}
