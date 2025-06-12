#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2){
        std::cerr << "Usage: ./RPN \"mathematical expression\"" << std::endl;
        return 1;
    }
    RPN rpn(av[1]);
    std::cout << rpn.evaluate() << std::endl;
    return 0;
}