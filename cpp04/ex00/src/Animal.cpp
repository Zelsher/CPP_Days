#include "../inc/Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructor called on Animal " << std::endl;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Copy constructor called on " << std::endl;
}

Animal& Animal::operator=(const Animal &claptrap)
{
    std::cout << "Affectation called on "  << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Destructor called on " << type << std::endl;
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
    if (type == "Dog")
        std::cout << "Dog sound" << std::endl;
    else if (type == "Cat")
        std::cout << "Cat sound" << std::endl;
    else
        std::cout << "Animal sound" << std::endl;
}
