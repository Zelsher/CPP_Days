#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, short int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat Constructor called named " << _name << " and graded " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat._name)
{
    *this = bureaucrat;
    std::cout << "Bureaucrat Copy Constructor called named " << _name << " and graded " << _grade << std::endl;
}
// Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat)
// {
//     _name = bureaucrat.getName();
//     _grade = bureaucrat.getGrade();
//     std::cout << "Bureaucrat Affectation called named " << _name << " and graded " << _grade << std::endl;
//     return *this;
// }

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    if (this != &bureaucrat)
        _grade = bureaucrat.getGrade();

    return *this;
}

Bureaucrat::~Bureaucrat()
{   
    std::cout << "Bureaucrat Desstructor called named " << _name << " and graded " << _grade << std::endl;
}

std::string	Bureaucrat::getName() const
{
    return _name;
}

short int	Bureaucrat::getGrade() const
{
    return _grade;
}

void		Bureaucrat::incrementGrade()
{
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void		Bureaucrat::decrementGrade()
{
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return os;
}