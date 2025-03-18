#include "../inc/Bureaucrat.hpp"
#include "../inc/RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    this->AForm::operator=(other);
    this->_target = other._target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    ToExecute(executor);
    std::cout << "DRILLLLLLLIIIIIIIIIINNNNNNNNNGGGGGG" << std::endl;
    std::srand(std::time(NULL));
	int random_number = (std::rand() % 2);
	if (random_number == 0)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << _target << " has not been robotomized successfully." << std::endl;
}