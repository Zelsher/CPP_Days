#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{ 
    private :
        const std::string   _name;
        bool                _signed;
        const short int     _grade_to_sign;
        const short int     _grade_to_exec;
    public :
        AForm(std::string name, short int grade_to_sign, short int grade_to_exec);
        virtual ~AForm();
        AForm(const AForm &other);
        AForm& operator=(const AForm &other);

        void            beSigned(Bureaucrat& bureaucrat);

        virtual void    execute(Bureaucrat const & executor) const = 0;
        void            ToExecute(Bureaucrat const & executor) const;

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
        class FormNotSigned : public std::exception 
		{
			public:
				virtual const char *	what() const throw() ;
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& other);

#endif 
