#include "Base.hpp"

int main()
{
    std::srand(static_cast<unsigned>(std::time(0)));

    Base* instance = generate();
    identify(instance);

    delete instance;

    return 0;
}
