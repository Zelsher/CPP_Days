#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int main()
{
    FragTrap    essaie("essaie");
    FragTrap    test("test");

    test = essaie;
    std::cout << std::endl;

    test.attack("un autre mec");
    std::cout << std::endl;

    test.takeDamage(4);
    std::cout << std::endl;

    test.beRepaired(2);
    std::cout << std::endl;

    test.attack("someone");
    std::cout << std::endl;

    test.hightFivesGuys();
    std::cout << std::endl;
}