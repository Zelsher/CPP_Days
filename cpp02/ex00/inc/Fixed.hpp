#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private : 
        int n;
        const int static nb_bits = 8;

    public :
        Fixed(void);
        Fixed( const Fixed &fixed);
        Fixed& operator=( const Fixed &fixed );
        ~Fixed();

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

};

#endif