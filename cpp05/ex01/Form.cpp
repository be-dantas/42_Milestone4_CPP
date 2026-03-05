#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::~Form() {}

Form::Form() : name("Default"), isSigned(false), signGrade(1), execGrade(1) {}

Form::Form(const std::string newName, const int newSign, const int newExec) : name(newName), isSigned(false), signGrade(newSign), execGrade(newExec)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& copy) : name(copy.name), isSigned(copy.isSigned), signGrade(copy.signGrade), execGrade(copy.execGrade) {}

Form& Form::operator=(const Form& copy)
{
	if (this != &copy)
		this->isSigned = copy.isSigned;
	return (*this);
}

/**********************************************************************/

const char* Form::GradeTooHighException::what() const throw() {
	return ("grade too high");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("grade too low");
}

/**********************************************************************/

const std::string Form::getName() const {
	return (name);
}

bool Form::getIsSigned() const {
	return (isSigned);
}

int Form::getSignGrade() const {
	return (signGrade);
}

int Form::getExecGrade() const {
	return (execGrade);
}

/**********************************************************************/

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > signGrade)
		throw GradeTooLowException();
	isSigned = true;
}

/**********************************************************************/

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << "Form " << f.getName() << " | Status: " << (f.getIsSigned() ? "signed" : "unsigned") << " | Grade to sign: " << f.getSignGrade() << " | Grade to execute: " << f.getExecGrade();
	return (os);
}
