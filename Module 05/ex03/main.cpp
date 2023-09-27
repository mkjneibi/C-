#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Intern Random;
    AForm *rrf;
    AForm *rre;
    AForm *rrr;
    AForm *rrp;
    AForm *rrs;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    rrf->beSigned(Bureaucrat("Bender", 1));
    rrf->execute(Bureaucrat("Bender", 1));
    std::cout << "-----------------------------------" << std::endl;
    rre = Random.makeForm("", "Bender");
    std::cout << "-----------------------------------" << std::endl;
    rrr = Random.makeForm("robotomy request", "Bender");
    rrr->beSigned(Bureaucrat("Bender", 1));
    rrr->execute(Bureaucrat("Bender", 1));
    std::cout << "-----------------------------------" << std::endl;
    rrp = Random.makeForm("presidential pardon", "Bender");
    rrp->beSigned(Bureaucrat("Bender", 1));
    rrp->execute(Bureaucrat("Bender", 1));
    std::cout << "-----------------------------------" << std::endl;
    rrs = Random.makeForm("shrubbery creation", "Bender");
    rrs->beSigned(Bureaucrat("Bender", 1));
    rrs->execute(Bureaucrat("Bender", 1));
    std::cout << "-----------------------------------" << std::endl;
    if (rrf || rre || rrr || rrp || rrs)
    {
        delete rrf;
        delete rre;
        delete rrr;
        delete rrp;
        delete rrs;
    }
    return 0;
}