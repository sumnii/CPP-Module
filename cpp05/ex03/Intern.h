#ifndef EX03_INTERN_H
#define EX03_INTERN_H

#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationsForm.h"

enum e_form {

};

class Intern {
public:
	Intern();
//	Intern(const Intern &ref);
//	Intern &operator=(const Intern &ref);
	~Intern();

	Form *makeForm(std::string form_name, std::string form_target);
	int static findForm(std::string form_name);

	class InvalidFormException : public std::exception {
	public:
		const char *what() const throw();
	};
};

#endif //EX03_INTERN_H
