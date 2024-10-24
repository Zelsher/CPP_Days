#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{ 
    private :
        const std::string   _name;
        bool                _signed;
        const short int     _grade_to_sign;
        const short int     _grade_to_exec;
    public :
        Form(std::string name, short int grade_to_sign, short int grade_to_exec);
        ~Form();
        Form(const Form &other);
        Form& operator=(const Form &other);

        void	        beSigned(Bureaucrat& bureaucrat);

        std::string	    GET_Name() const;
        bool	        IS_Signed() const;
        short int	    GET_Grade_To_Sign() const;
        short int       GET_Grade_To_Exec() const;

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

std::ostream& operator<<(std::ostream& os, const Form& other);

#endif 
