#include "../inc/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Wrong Cat")
{
    std::cout << "Wrong Cat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat) : WrongAnimal(cat)
{
	std::cout << "Copy constructor called on WrongCat " << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &cat)
{
	std::cout << "Affectation called on WrongCat " << std::endl;
	WrongCat::operator=(cat);
	return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout << "Wrong Cat destructor called" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Wrong Cat song" << std::endl;
}