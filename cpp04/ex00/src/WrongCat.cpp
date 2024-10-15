#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Wrong Cat")
{
    std::cout << "Wrong Cat default constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "Wrong Cat destructor called" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Wrong Cat song" << std::endl;
}