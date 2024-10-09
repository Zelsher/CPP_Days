#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main()
{
    ScavTrap essaie("essaie");
    std::cout << std::endl;

    essaie.attack("un autre mec");
    std::cout << std::endl;

    essaie.takeDamage(4);
    std::cout << std::endl;

    essaie.beRepaired();

    essaie.attack("quelquun");

    essaie.guardGate();
}