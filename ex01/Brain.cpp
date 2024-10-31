#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain( const Brain &src )
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain &Brain::operator = ( const Brain &src )
{
    if (this == &src)
        return *this;
    std::cout << "Brain assignation operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
    return *this;
} 

Brain::~Brain( void )
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea( int index, std::string idea )
{
    this->ideas[index] = idea;
}

std::string Brain::getIdea( int index ) const
{
    return this->ideas[index];
}