#include "../inc/Intern.hpp"


Intern::Intern()
{}
Intern::~Intern()
{}

Intern::Intern(const Intern &other)
{
    (void)other;
}
Intern& Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}

AForm *Intern::Shrubbery(std::string Target)
{
    return new ShrubberyCreationForm(Target);
}

AForm *Intern::Robotomy(std::string Target)
{
    return new RobotomyRequestForm(Target);
}


AForm *Intern::Presidential(std::string Target)
{
    return new PresidentialPardonForm(Target);
}

AForm *Intern::makeForm(std::string Name, std::string Target)
{
    std::string levels[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm *(Intern::*function[]) (std::string Target) =
    {
        &Intern::Shrubbery,
        &Intern::Robotomy,
        &Intern::Presidential,
    };

    std::transform(Name.begin(), Name.end(), Name.begin(), ::tolower);

    for (int i = 0; i < 3; i++)
    {
        if (Name == levels[i])
        {
            std::cout << "Intern creates " << Name << std::endl;
            return (this->*function[i])(Target);
        }
    }
    std::cout << "Intern cannot create " << Name << " form" << std::endl;
    return NULL;
}