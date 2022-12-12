#include "Form.h"
#include "ShrubberyCreationsForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"

void leaks() {
	std::cout << std::endl << "-------------------[ leaks test ]-------------------" << std::endl;
	system("leaks intern"); }

int main() {
	Bureaucrat high_sum("👑 SUMIN", 1);
	Intern someRandomIntern;
	Form* rrf;

	try {
		rrf = someRandomIntern.makeForm("any wrong form", "Sumin");
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	high_sum.signForm(*rrf);
	std::cout << *rrf << std::endl;
	high_sum.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl << std::endl;

	rrf = someRandomIntern.makeForm("Shrubbery creations", "Tree");
	high_sum.signForm(*rrf);
	std::cout << *rrf << std::endl;
	high_sum.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl << std::endl;

	rrf = someRandomIntern.makeForm("Presidential Pardon", "Bad person");
	high_sum.signForm(*rrf);
	std::cout << *rrf << std::endl;
	high_sum.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	atexit(leaks);
}
