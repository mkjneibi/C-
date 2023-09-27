#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Intern Random;
    AForm *rrf;
    AForm *rre;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << "------------------------------------" << std::endl;
    rre = Random.makeForm("", "Bender");
    if (rrf || rre)
    {
        delete rrf;
        delete rre;
    }
    return 0;
}