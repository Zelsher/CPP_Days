#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    Cat *i = new Cat();
    Cat *test = new Cat();
    
    *i = *test;

    std::cout << test->get_idea(0) << " | " << i->get_idea(0) << std::endl;
    test->set_idea(0, "test");
    std::cout << test->get_idea(0) << " | " << i->get_idea(0) << std::endl;

    delete  test;

    std::cout << i->get_idea(0) << std::endl;

    delete  j;
    delete  i;

    Animal *list[100];
    for (int i = 0; i <= 49; i++)
        list[i] = new Dog();
    for (int i = 50; i <= 99; i++)
        list[i] = new Cat();

    for (int i = 0; i <= 99; i++)
        delete list[i];

    return 0;
}