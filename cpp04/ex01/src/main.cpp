#include "../inc/ClapTrap.hpp"

int main()
{
    ClapTrap dude("test");
    ClapTrap guy(dude);
    ClapTrap boy("nill");
    boy = guy;
    std::cout << std::endl;

    dude.attack("un mec");
    guy.attack("un autre mec");
    boy.attack("quelqu'un");
    std::cout << std::endl;

    dude.takeDamage(5);
    guy.takeDamage(4);
    boy.takeDamage(3);
    std::cout << std::endl;

    dude.beRepaired(4);
    guy.beRepaired(3);
    boy.beRepaired(2);
}