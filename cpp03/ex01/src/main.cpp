#include "../inc/ClapTrap.hpp"

int main()
{
    ClapTrap test("test");
    ClapTrap essaie(test);
    std::cout << std::endl;

    test.attack("un mec");
    essaie.attack("un autre mec");
    std::cout << std::endl;

    test.takeDamage(5);
    essaie.takeDamage(4);
    std::cout << std::endl;

    test.beRepaired(4);
    essaie.beRepaired(3);
}