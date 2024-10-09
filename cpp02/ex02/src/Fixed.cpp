#include "../inc/Fixed.hpp"

Fixed::Fixed(void)
{
    this->n = 0;
}

Fixed::Fixed( const Fixed &fixed)
{
    this->n = fixed.getRawBits();
}

Fixed& Fixed::operator=( const Fixed &fixed ) 
{
    if (this != &fixed)
        this->n = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed()
{}

int Fixed::getRawBits( void ) const
{
    return this->n;
}

void Fixed::setRawBits( int const raw )
{
    this->n = raw;
}

Fixed::Fixed( const int n)
{
    this->n = n << this->nb_bits;
}

Fixed::Fixed( const float n)
{
    this->n = (roundf(n * (1 << this->nb_bits)));
}

float   Fixed::toFloat( void ) const
{
    return (static_cast<float>(this->n) / (1 << this->nb_bits));
}

int   Fixed::toInt( void ) const
{
    return (static_cast<int>(this->n >> this->nb_bits));
}

std::ostream & operator<<( std::ostream & ostream, Fixed const & fixed )
{
    ostream << fixed.toFloat();
    return ostream;
}


bool Fixed::operator>( const Fixed &fixed ) const
{
    return (this->getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<( const Fixed &fixed ) const
{
    return (this->getRawBits() < fixed.getRawBits());
}

bool Fixed::operator>=( const Fixed &fixed ) const
{
    return (this->getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<=( const Fixed &fixed ) const
{
    return (this->getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator==( const Fixed &fixed ) const
{
    return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=( const Fixed &fixed ) const
{
    return (this->getRawBits() != fixed.getRawBits());
}

Fixed Fixed::operator+( const Fixed &fixed ) const
{
    Fixed fix(this->toFloat() + fixed.toFloat());
    return (fix);
}

Fixed Fixed::operator-( const Fixed &fixed ) const
{
    Fixed fix(this->toFloat() - fixed.toFloat());
    return (fix);
}

Fixed Fixed::operator*( const Fixed &fixed ) const
{
    Fixed fix(this->toFloat() * fixed.toFloat());
    return (fix);
}

Fixed Fixed::operator/( const Fixed &fixed ) const
{
    Fixed fix(this->toFloat() / fixed.toFloat());
    return (fix);
}

Fixed&   Fixed::operator++( void ) 
{
    ++this->n;
    return *this;
}

Fixed   Fixed::operator++( int ) 
{
    Fixed temp = *this;
    temp.n = this->n++;
    return (temp);
}

Fixed&   Fixed::operator--( void ) 
{
    this->n -= 1;
    return *this;
}

Fixed   Fixed::operator--( int ) 
{
    Fixed temp = *this;
    temp.n = this->n--;
    return (temp);
}


Fixed&  Fixed::min( Fixed &fix1, Fixed &fix2 )
{
    if (fix1 < fix2)
        return fix1;
    return fix2;
}

Fixed&  Fixed::max( Fixed &fix1, Fixed &fix2 )
{
    if (fix1 < fix2)
        return fix2;
    return fix1;
}

const Fixed& Fixed::min( const Fixed &fix1, const Fixed &fix2 )
{
    if (fix1 < fix2)
        return fix1;
    return fix2;
}

const Fixed& Fixed::max( const Fixed &fix1, const Fixed &fix2 )
{
    if (fix1 < fix2)
        return fix2;
    return fix1;
}