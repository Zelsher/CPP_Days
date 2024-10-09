#include "../inc/Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->n = 0;
}

Fixed::Fixed( const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->n = fixed.getRawBits();
}

Fixed& Fixed::operator=( const Fixed &fixed ) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->n = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

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
    std::cout << "Int constructor called" << std::endl;
    this->n = n << this->nb_bits;
}

Fixed::Fixed( const float n)
{
    std::cout << "Float constructor called" << std::endl;
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