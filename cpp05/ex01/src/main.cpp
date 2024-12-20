#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main()
{
    Form    Test("Test", 15, 10);
    std::cout << Test << std::endl;

    Bureaucrat  Melvin("Melvin", 14);
    Bureaucrat  Kevin("Kevin", 17);

    try
    {
        Test.beSigned(Melvin);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Test.beSigned(Kevin);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}

// int main()
// {
//     Bureaucrat Jean("Jean", 1);
//     Bureaucrat A("Isoou", 150);
    
//     std::cout<< Jean << std::endl << A << std::endl;
     
//     try
//     {
//         Jean.incrementGrade();
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         Jean.decrementGrade();
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
//     std::cout << Jean << std::endl;
    
//     return (0);
// }