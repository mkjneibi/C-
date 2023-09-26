#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form
{
    private:
        std::string name;
        bool signedStatus;
        int gradeToSign;
        int gradeToExecute;

    public:
        Form(const std::string& name, int gradeToSign, int gradeToExecute);
        virtual ~Form(); // Added a virtual destructor
        Form(const Form &copy);
        Form &operator=(const Form &copy);
        const std::string& getName() const;
        bool isSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void beSigned(const Bureaucrat& bureaucrat);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
