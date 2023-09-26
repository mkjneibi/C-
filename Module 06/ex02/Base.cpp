#include "Base.hpp"

Base* generate()
{
    int random = std::rand() % 3;
    switch (random)
    {
        case 0: return new A();
        case 1: return new B();
        case 2: return new C();
    }
    return 0;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try {
        identify(&p);
    } catch (std::bad_cast) {
        std::cout << "Unknown" << std::endl;
    }
}
