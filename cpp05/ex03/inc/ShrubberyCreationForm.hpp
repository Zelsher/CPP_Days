#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

#include "AForm.hpp"
# include "Bureaucrat.hpp"

class AForm;
class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
    private :
        std::string _target;
    public :
        ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &shrubberycreationform);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shrubberycreationform);
		virtual ~ShrubberyCreationForm();

        void execute(Bureaucrat const & executor) const;
};


#endif