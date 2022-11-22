#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() : name("Unknown"), grade(1) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name) {
	if (grade < 1) {
		throw GradeTooLowException();
	}
	else if (grade > 150)
		throw GradeTooHighException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &ref) : name(ref.name) {
	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
	grade = ref.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref) {
	if (ref.grade < 1)
		throw GradeTooLowException();
	else if (ref.grade > 150)
		throw GradeTooHighException();
	grade = ref.grade;
	return (*this);
}

const std::string &Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too High!\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too Low!\n");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat b) {
	std::cout << "!!";
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (out);
}
