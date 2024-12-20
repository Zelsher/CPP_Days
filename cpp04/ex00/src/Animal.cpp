#include "../inc/Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructor called on Animal " << std::endl;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Copy constructor called on Animal " << type  << std::endl;
}

Animal& Animal::operator=(const Animal &claptrap)
{
    std::cout << "Affectation called on Animal " << type  << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Destructor called on Animal " << type << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}
