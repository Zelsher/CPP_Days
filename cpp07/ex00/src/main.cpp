#include "../inc/whatever.hpp"

int main()
{
    int a = 1;
    int b = 42;
    std::cout << "a before swap :" << a << std::endl << "b before swap : " << b << std::endl;
    swap(a, b);
    std::cout << "a after swap :" << a << std::endl << "b after swap : " << b << std::endl;
    std::cout << "min : " << min(a, b) << std::endl;
    std::cout << "max : " << max(a, b) << std::endl;

    char g = 'g';
    char z = 'z';
    std::cout << "g before swap :" << g << std::endl << "z before swap : " << z << std::endl;
    swap(g, z);
    std::cout << "g after swap :" << g << std::endl << "z after swap : " << z << std::endl;
    std::cout << "min : " << min(z, g) << std::endl;
    std::cout << "max : " << max(z, g) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;

    return 0;
}