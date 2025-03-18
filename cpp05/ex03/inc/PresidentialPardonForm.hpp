#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

#include "AForm.hpp"
# include "Bureaucrat.hpp"

class AForm;
class Bureaucrat;

class PresidentialPardonForm : public AForm
{
    private :
        std::string _target;
    public :
        PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &presidentialpardonform);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &presidentialpardonform);
		virtual ~PresidentialPardonForm();

        void execute(Bureaucrat const & executor) const;
};


#endif