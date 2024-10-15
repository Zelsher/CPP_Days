#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    Animal *list[100];
    for (int i = 0; i <= 49; i++)
        list[i] = new Dog();
    for (int i = 50; i <= 99; i++)
        list[i] = new Cat();

    for (int i = 0; i <= 99; i++)
        delete list[i];
    return 0;
}