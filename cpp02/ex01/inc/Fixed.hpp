#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private : 
        int n;
        const int static nb_bits = 8;

    public :
        Fixed(void);
        Fixed(const int n);
        Fixed(const float n);
        Fixed( const Fixed &fixed);
        Fixed& operator=( const Fixed &fixed );
        ~Fixed();

        

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif