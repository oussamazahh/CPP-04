#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    protected:
        std::string ideas[100];
        
    public:
        Brain( void );
        ~Brain( void );
        Brain( const Brain &src );
        Brain &operator = ( const Brain &src );
        void setIdea( int index, std::string idea );
        std::string getIdea( int index ) const;
};
#endif