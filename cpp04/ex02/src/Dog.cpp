#include "../inc/Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Constructor called on Dog " << std::endl;
	this->setType("Dog");
	_brain = new Brain("dog ideas");
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
	_brain = new Brain(*dog._brain);
	std::cout << "Copy constructor called on Dog " << std::endl;
}

Dog& Dog::operator=(const Dog &dog)
{
	_brain = dog._brain;
	std::cout << "Affectation called on Dog " << std::endl;
	Animal::operator=(dog);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Destructor called on Dog " << std::endl;
	delete _brain;
}

void    Dog::makeSound(void) const
{
    std::cout << "Dog sound" << std::endl;
}
