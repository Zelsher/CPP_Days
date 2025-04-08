#include "../inc/iter.hpp"

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    char c[4] = {'a', 'b', 'c', 'd'};

    std::cout << "Avant iter (int): ";
    for (int i = 0; i < 5; i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;

    iter(a, 5, &incr<int>);

    std::cout << "Après iter (int): ";
    for (int i = 0; i < 5; i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;

    std::cout << "Avant iter (char): ";
    for (int i = 0; i < 4; i++)
        std::cout << c[i] << " ";
    std::cout << std::endl;

    iter(c, 4, &incr<char>);

    std::cout << "Après iter (char): ";
    for (int i = 0; i < 4; i++)
        std::cout << c[i] << " ";
    std::cout << std::endl;

    return 0;
}