#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

#include "AForm.hpp"
# include "Bureaucrat.hpp"

class AForm;
class Bureaucrat;

class RobotomyRequestForm : public AForm
{
    private :
        std::string _target;
    public :
        RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &robotomyrequestform);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &robotomyrequestform);
		virtual ~RobotomyRequestForm();

        void execute(Bureaucrat const & executor) const;
};


#endif