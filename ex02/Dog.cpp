#include "Dog.hpp"

Dog::Dog( void ) {
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog( const Dog &src ) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog &Dog::operator = ( const Dog &src )
{
    if (this == &src)
        return *this;
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = src.type;
    return *this;
}

Dog::~Dog( void ) {
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

void Dog::makeSound( void ) const {
    std::cout << "Woof Woof" << std::endl;
}