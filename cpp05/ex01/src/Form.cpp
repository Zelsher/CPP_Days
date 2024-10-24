#include "../inc/Form.hpp"

Form::Form(std::string name, short int grade_to_sign, short int grade_to_exec) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
	_signed = false;
	std::cout << "Default constructor called" << std::endl;
}
Form::~Form()
{
	std::cout << "Destructor called" << std::endl;
}
Form::Form(const Form&form) : _name(form.GET_Name()), _grade_to_sign(form.GET_Grade_To_Sign()), _grade_to_exec(form.GET_Grade_To_Exec()), _signed(form.IS_Signed())
{
	std::cout << "Recopy constructor called" << std::endl;
}

Form& Form::operator=(const Form &other) 
{
	std::cout << "Assignment operator called" << std::endl;
    if (this != &other)
        _signed = other.IS_Signed();
    return *this;
}


std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "\n___________________\n" << form.GET_Name()  << "\nSigned : " <<  form.IS_Signed() << "\nGrade to sign : " << form.GET_Grade_To_Sign()
	<< "\nGrade to exec : " << form.GET_Grade_To_Exec() << "\n___________________" << std::endl;
    return os;
}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _grade_to_sign)
        throw GradeTooLowException();
	else
		_signed = 1;
	bureaucrat.signForm(*this);
}

//GETTER

std::string	Form::GET_Name() const
{
	return _name;
}

bool	Form::IS_Signed() const
{
	return _signed;
}

short int	Form::GET_Grade_To_Sign() const
{
	return _grade_to_sign;
}

short int Form::GET_Grade_To_Exec() const
{
	return _grade_to_exec;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Form Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Form Grade too low!";
}