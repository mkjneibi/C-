#include "Intern.hpp"

const char* Intern::formNames[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

Intern::Intern()
{
    formCreators[0] = createPresidentialPardonForm;
    formCreators[1] = createRobotomyRequestForm;
    formCreators[2] = createShrubberyCreationForm;
}

Intern::~Intern() {}

Intern::Intern(const Intern &copy)
{
    std::cout << "Intern copy constructor called" << std::endl;
    *this = copy;
}

Intern &Intern::operator=(const Intern &copy)
{
    std::cout << "Intern assignment operator called" << std::endl;
    if (this != &copy)
    {
        *this = copy;
    }
    return (*this);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
    for (int i = 0; i < 3; ++i)
    {
        if (formName == formNames[i])
        {
            std::cout << "Intern creates " << formName << " Form" << std::endl;
            return formCreators[i](target);
        }
    }

    std::cout << "Error: Unknown form name" << std::endl;
    return NULL;
}

AForm* Intern::createPresidentialPardonForm(const std::string& target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::createRobotomyRequestForm(const std::string& target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::createShrubberyCreationForm(const std::string& target)
{
    return new ShrubberyCreationForm(target);
}
