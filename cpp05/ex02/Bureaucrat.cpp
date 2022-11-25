#include "Bureaucrat.h"
#include "Form.h"

Bureaucrat::Bureaucrat() : name("Unknown"), grade(1) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name) {
	if (1 <= grade && grade <= 150)
		this->grade = grade;
	else if (grade > 150) {
		std::cout << name << ", ";
		throw GradeTooLowException();
	}
	else {
		std::cout << name << ", ";
		throw GradeTooHighException();
	}
}

Bureaucrat::~Bureaucrat() {
	std::cout << " ~ destructor called ~" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref) : name(ref.name) {
	if (1 <= ref.grade && ref.grade <= 150)
		grade = ref.grade;
	else if (ref.grade > 150) {
		std::cout << name << ", ";
		throw GradeTooLowException();
	}
	else {
		std::cout << name << ", ";
		throw GradeTooHighException();
	}
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref) {
	if (1 <= ref.grade && ref.grade <= 150)
		grade = ref.grade;
	else if (ref.grade > 150) {
		std::cout << name << ", ";
		throw GradeTooLowException();
	}
	else {
		std::cout << name << ", ";
		throw GradeTooHighException();
	}
	return (*this);
}

const std::string &Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::increaseGrade() {
	std::cout << name << ", bureaucrat grade UP!" << std::endl;
	--grade;
	if (grade < 1) {
		++grade;
		std::cout << name << ", ";
		throw GradeTooHighException();
	}
}

void Bureaucrat::DecreaseGrade() {
	std::cout << name << ", bureaucrat grade DOWN!" << std::endl;
	++grade;
	if (grade > 150) {
		--grade;
		std::cout << name << ", ";
		throw GradeTooLowException();
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too High!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too Low!");
}

void Bureaucrat::executeForm(Form const &form) {
	if (form.getIsSigned() == false) {
		std::cout << "<" << form.getName() << "> ";
		throw Form::IsUnsignedException();
	} else if (form.getAccessToExecute() < this->grade) {
		std::cout << this->name << " couldn't execute <" << form.getName() << "> because ";
		throw GradeTooLowException();
	} else
		form.execute(*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &b) {
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (out);
}
