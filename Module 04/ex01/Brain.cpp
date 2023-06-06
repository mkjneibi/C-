#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
		_ideas[i] = "idea number " + std::to_string(i);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain( const Brain& copy )
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain& Brain::operator=( const Brain& copy )
{
    std::cout << "Brain assignation operator called" << std::endl;
    if ( this != &copy ) {
        for ( int i = 0; i < 100; i++ ) {
            this->_ideas[i] = copy._ideas[i];
        }
    }
    return *this;
}

std::string Brain::getIdea( int i ) const
{
    if ( i < 0 || i > 99 )
        return "Wrong index";
    return this->_ideas[i];
}