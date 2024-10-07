#include "../inc/Harl.hpp"

int main()
{
    Harl    Harl_robot;

    Harl_robot.complain("DEBUG");
    Harl_robot.complain("INFO");
    Harl_robot.complain("WARNING");
    Harl_robot.complain("ERROR");
    return (0);
}