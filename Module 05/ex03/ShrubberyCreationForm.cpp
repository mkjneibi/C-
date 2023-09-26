#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("Shrubbery Creation Form", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    if (!isSigned())
        throw NotSignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    std::ofstream outputFile((target + "_shrubbery").c_str());
    if (outputFile.is_open())
    {
        outputFile << "   oxoxoo    ooxoo" << std::endl;
        outputFile << "  ooxoxo oo  oxoxooo" << std::endl;
        outputFile << " oooo xxoxoo ooo ooox" << std::endl;
        outputFile << "oxo o oxoxo  xoxxoxo" << std::endl;
        outputFile << " oxo xoox MK  o ooo" << std::endl;
        outputFile << "   oo/oo\\   //o/o" << std::endl;
        outputFile << "         \\  //" << std::endl;
        outputFile << "         ||  ||" << std::endl;
        outputFile << "         ||  ||" << std::endl;
        outputFile << "         ||  ||" << std::endl;
        outputFile << "         ||  ||" << std::endl;
        outputFile << "   ______//___\\____" << std::endl;
        outputFile.close();
    }
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
    std::cout << "SCF copy constructor called" << std::endl;
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    std::cout << "SCF assignment operator called" << std::endl;
    if (this != &copy)
    {
        AForm::operator=(copy);
        target = copy.target;
    }
    return (*this);
}