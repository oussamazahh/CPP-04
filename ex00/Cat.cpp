#include "Cat.hpp"

Cat::Cat( void ) {
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat( const Cat &src ) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat &Cat::operator = ( const Cat &src ) {
    if (this == &src)
        return *this;
    std::cout << "Cat assignation operator called" << std::endl;
    this->type = src.type;
    return *this;
}

Cat::~Cat( void ) {
    std::cout << "Cat destructor called" << std::endl;
}


void Cat::makeSound( void ) const {
    std::cout << "Meow Meow" << std::endl;
}