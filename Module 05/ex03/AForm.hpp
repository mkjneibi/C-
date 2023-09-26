#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class AForm
{
    private:
        std::string name;
        bool signedStatus;
        int gradeToSign;
        int gradeToExecute;

    public:
        AForm(const std::string& name, int gradeToSign, int gradeToExecute);
        virtual ~AForm();
        AForm();
        AForm(const AForm &copy);
        AForm &operator=(const AForm &copy);
        const std::string& getName() const;
        bool isSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void beSigned(const Bureaucrat& bureaucrat);

        class NotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

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

        virtual void execute(const Bureaucrat& executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif
