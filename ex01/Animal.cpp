#include "Animal.hpp"

Animal::Animal( void )
{
    this->type = "Animal";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal( const Animal &src )
{
    *this = src;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator = ( const Animal &src )
{
    if (this == &src)
        return *this;
    this->type = src.type;
    std::cout << "Animal assignation operator called" << std::endl;
    return *this;
}

Animal::~Animal( void ) {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType( void ) const {
    return this->type;
}

void Animal::makeSound( void ) const {
    std::cout << "Animal sound" << std::endl;
}
