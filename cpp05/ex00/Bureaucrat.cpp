#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() : name("Unknown"), grade(1) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &ref) : name(ref.name), grade(grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref) {
	grade = ref.grade;
}

const std::string &Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}
