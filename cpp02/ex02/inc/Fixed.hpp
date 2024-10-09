
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

        bool operator>( const Fixed &fixed ) const ;
        bool operator>=( const Fixed &fixed ) const ;
        bool operator<( const Fixed &fixed ) const ;
        bool operator<=( const Fixed &fixed ) const ;
        bool operator==( const Fixed &fixed ) const ;
        bool operator!=( const Fixed &fixed ) const ;

        Fixed operator+( const Fixed &fixed ) const;
        Fixed operator-( const Fixed &fixed ) const;
        Fixed operator/( const Fixed &fixed ) const;
        Fixed operator*( const Fixed &fixed ) const;

        Fixed &operator++( void ) ; // prefix
        Fixed operator++( int ) ; // postfix
        Fixed &operator--( void ) ;
        Fixed operator--( int ) ;

        static Fixed& min( Fixed &fix1, Fixed &fix2 );
        static const Fixed& min( const Fixed &fix1, const Fixed &fix2 );
        static Fixed&  max( Fixed &fix1, Fixed &fix2 );
        static const Fixed& max( const Fixed &fix1, const Fixed &fix2 );
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif