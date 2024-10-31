#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"
class Animal
{
    protected:
        std::string type;
    public:
        Animal( void );
        virtual ~Animal( void );
        Animal( const Animal &src );
        Animal &operator = ( const Animal &src );
        virtual void makeSound( void ) const = 0;
        std::string getType( void ) const;
};
#endif
