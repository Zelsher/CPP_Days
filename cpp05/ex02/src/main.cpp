#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

int main()
{
    PresidentialPardonForm  Test_presidential("Target presiential");
    std::cout << Test_presidential << std::endl;
    RobotomyRequestForm     Test_robot("Target Robot");
    std::cout << Test_robot << std::endl;
    ShrubberyCreationForm   Test_Shrubbery("Target Shrubbery");
    std::cout << Test_Shrubbery << std::endl;

    Bureaucrat  Melvin("Melvin", 14);
    Bureaucrat  Kevin("Kevin", 17);
    Bureaucrat  Calvin("Calvin", 27);

    try
    {
        Melvin.signForm(Test_presidential);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    //Melvin.signForm(Test_presidential);
    //Melvin.executeForm(Test_presidential);
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