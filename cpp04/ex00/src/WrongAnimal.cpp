#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Wrong Animal")
{
    std::cout << "Wrong Animal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string s) : type(s)
{
    std::cout << "Wrong Animal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Wrong Animal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
    std::cout << "Wrong Animal copy constructor called" << std::endl;
    this->type = animal.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &animal)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &animal)
        this->type = animal.type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal souund" << std::endl;
}