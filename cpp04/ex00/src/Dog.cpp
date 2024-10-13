#include "../inc/Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Constructor called on Dog " << std::endl;
	this->setType("Dog");
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
	std::cout << "Copy constructor called on Dog " << std::endl;
}

Dog& Dog::operator=(const Dog &dog)
{
	std::cout << "Affectation called on Dog " << std::endl;
	Animal::operator=(dog);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Destructor called on Dog " << std::endl;
}

