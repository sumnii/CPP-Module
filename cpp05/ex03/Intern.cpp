#include "Intern.h"

Intern::Intern() {
	std::cout << "new Intern !" << std::endl;
}

Intern::~Intern() {
	std::cout << "bye Intern !" << std::endl;
}

Form *Intern::makeForm(std::string form_name, std::string form_target) {
	Form *new_form;

	switch (findForm(form_name)) {
		case -1:
			std::cout << "<" << form_name << "> ";
			throw InvalidFormException();
		case 0:
			new_form = new PresidentialPardonForm(form_target);
			break;
		case 1:
			new_form = new RobotomyRequestForm(form_target);
			break;
		case 2:
			new_form = new ShrubberyCreationsForm(form_target);
			break;
	}
	std::cout << "Intern creates " << form_name << std::endl;
	return (new_form);
}

int Intern::findForm(std::string form_name) {
	std::string form[3] = {"presidential pardon", "robotomy request", "shrubbery creations"};

	for (int i = 0; i < 3; ++i) {
		if (strcasecmp(form_name.c_str(), form[i].c_str()) == 0)
			return (i);
	}
	return (-1);
}

const char *Intern::InvalidFormException::what() const throw() {
	return ("Invalid Form Name!");
}
