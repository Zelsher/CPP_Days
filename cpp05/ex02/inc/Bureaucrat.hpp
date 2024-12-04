#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
# include <cstdlib>
# include <ctime>
# include <fstream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private :
		const 		std::string	_name;
		short int	_grade;
	public:
		Bureaucrat(std::string name, short int grade);
		Bureaucrat(const Bureaucrat &bureaucrat);
		Bureaucrat &operator=(const Bureaucrat &bureaucrat);
		~Bureaucrat();

		void	signForm(AForm& form);
		void	executeForm(AForm const & form);

		std::string	getName() const;
		short int	getGrade() const;
		void		incrementGrade();
		void		decrementGrade();

        class GradeTooHighException : public std::exception 
		{
			public:
				virtual const char *	what() const throw();
		};
		class GradeTooLowException : public std::exception 
		{
			public:
				virtual const char *	what() const throw() ;
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif