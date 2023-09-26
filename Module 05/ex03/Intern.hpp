#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;

class Intern
{
    private:
        typedef AForm* (*FormCreationFunction)(const std::string&);
        FormCreationFunction formCreators[3];
        static const char *formNames[3];
        static AForm* createPresidentialPardonForm(const std::string& target);
        static AForm* createRobotomyRequestForm(const std::string& target);
        static AForm* createShrubberyCreationForm(const std::string& target);

    public:
        Intern();
        ~Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &copy);
        AForm* makeForm(const std::string& formName, const std::string& target);
};

#endif



