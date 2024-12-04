#include "../inc/AForm.hpp"

AForm::AForm(std::string name, short int grade_to_sign, short int grade_to_exec) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
	_signed = false;
	std::cout << "Default constructor called" << std::endl;
}
AForm::~AForm()
{
	std::cout << "Destructor called" << std::endl;
}
AForm::AForm(const AForm&form) : _name(form.GET_Name()), _grade_to_sign(form.GET_Grade_To_Sign()), _grade_to_exec(form.GET_Grade_To_Exec()), _signed(form.IS_Signed())
{
	std::cout << "Recopy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm &other) 
{
	std::cout << "Assignment operator called" << std::endl;
    if (this != &other)
        _signed = other.IS_Signed();
    return *this;
}


std::ostream& operator<<(std::ostream& os, const AForm& form)
{
    os << "\n___________________\n" << form.GET_Name()  << "\nSigned : " <<  form.IS_Signed() << "\nGrade to sign : " << form.GET_Grade_To_Sign()
	<< "\nGrade to exec : " << form.GET_Grade_To_Exec() << "\n___________________" << std::endl;
    return os;
}

void	AForm::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _grade_to_sign)
        throw GradeTooLowException();
	else
		_signed = 1;
	bureaucrat.signForm(*this);
}


void            AForm::ToExecute(Bureaucrat const & executor) const
{
	if (executor.getGrade() < _grade_to_exec)
		throw AForm::GradeTooLowException();
	std::cout << "signed : " << _signed << std::endl;
	if (!_signed)
		throw AForm::FormNotSigned();
}

//GETTER

std::string	AForm::GET_Name() const
{
	return _name;
}

bool	AForm::IS_Signed() const
{
	return _signed;
}

short int	AForm::GET_Grade_To_Sign() const
{
	return _grade_to_sign;
}

short int AForm::GET_Grade_To_Exec() const
{
	return _grade_to_exec;
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Form Grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Form Grade too low!";
}

const char* AForm::FormNotSigned::what() const throw() {
    return "Form not signed yet!";
}