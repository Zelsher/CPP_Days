#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <map>
#include <algorithm>

class Intern
{
    private :
    public :
		Intern();
		~Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);
		AForm *Shrubbery(std::string Target);
		AForm *Robotomy(std::string Target);
		AForm *Presidential(std::string Target);
		AForm *makeForm(std::string Name, std::string Target);
};

#endif
