#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int main()
{
    ScavTrap    essaie("yrdy");
    std::cout << std::endl;

    essaie.attack("un autre mec");
    std::cout << std::endl;

    essaie.takeDamage(4);
    std::cout << std::endl;

    essaie.beRepaired(2);

    essaie.attack("someone");

    essaie.guardGate();
}