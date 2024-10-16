#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/WrongAnimal.hpp"

int main()
{
    // Dog dog;
    // Cat cat;

    // dog.makeSound();
    // cat.makeSound();
    // std::cout << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << std::endl;

    i->makeSound();
    j->makeSound();
    std::cout << std::endl;
    meta->makeSound();
    std::cout << std::endl;
    
    delete  meta;
    delete  i;
    delete  j;
    std::cout << std::endl << "wrongggggggg animal"<< std::endl;

    WrongAnimal *testanimal = new WrongAnimal();
    WrongAnimal *testcat = new WrongCat();
    std::cout << std::endl;

    testanimal->makeSound();
    testcat->makeSound();
    std::cout << std::endl;
    return 0;
}