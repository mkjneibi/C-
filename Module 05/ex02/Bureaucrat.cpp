#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
    if (grade < 1)
    {
        throw GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw GradeTooLowException();
    }
    this->grade = grade;
}

Bureaucrat::~Bureaucrat() {}

const std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incrementGrade()
{
    if (grade > 1)
    {
        grade--;
    }
    else
    {
        throw GradeTooHighException();
    }
}

void Bureaucrat::decrementGrade()
{
    if (grade < 150)
    {
        grade++;
    }
    else
    {
        throw GradeTooLowException();
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    std::cout << "Bureaucrat assignment operator called" << std::endl;
    if (this != &copy)
    {
        name = copy.name;
        grade = copy.grade;
    }
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
