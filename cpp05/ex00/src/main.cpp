#include "../inc/Bureaucrat.hpp"

// int main()
// {
//     Bureaucrat  James("James", 42);
//     Bureaucrat  Hector("Hector", 132);
//     Bureaucrat  Diego("Diego", 0);
//     return 0;
// }

int main()
{
    Bureaucrat Jean("Jean", 1);
    Bureaucrat A("Isoou", 150);
    
    std::cout<< Jean << std::endl << A << std::endl;
     
    try
    {
        Jean.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Jean.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << Jean << std::endl;
    
    return (0);
}