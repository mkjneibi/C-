#include "AForm.hpp"

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute)
    : name(name), signedStatus(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::AForm(): name("Default"), signedStatus(false), gradeToSign(1), gradeToExecute(1) {}

AForm::~AForm() {}

const std::string& AForm::getName() const
{
    return name;
}

bool AForm::isSigned() const
{
    return signedStatus;
}

int AForm::getGradeToSign() const
{
    return gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return gradeToExecute;
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= gradeToSign)
        signedStatus = true;
}

const char* AForm::NotSignedException::what() const throw()
{
    return "Form is not signed";
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

AForm::AForm(const AForm &copy)
{
    std::cout << "AForm copy constructor called" << std::endl;
    *this = copy;
}

AForm &AForm::operator=(const AForm &copy)
{
    std::cout << "AForm assignment operator called" << std::endl;
    if (this != &copy)
    {
        name = copy.name;
        signedStatus = copy.signedStatus;
    }
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
    os << "Form: " << form.getName()
    << ", Signed: " << (form.isSigned() ? "Yes" : "No")
    << ", Grade to Sign: " << form.getGradeToSign()
    << ", Grade to Execute: " << form.getGradeToExecute();
    return os;
}
