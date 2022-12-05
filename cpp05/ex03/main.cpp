#include "Form.h"
#include "ShrubberyCreationsForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"

void leaks() {
	std::cout << std::endl << "-------------------[ leaks test ]-------------------" << std::endl;
	system("leaks intern"); }

int main() {
	Bureaucrat top_sum("👑 SUMIN", 1);
	Intern someRandomIntern;
	Form* rrf;

	try {
		rrf = someRandomIntern.makeForm("any wrong form", "Sumin");
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;
	rrf->beSigned(top_sum);
	top_sum.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl << std::endl;

	rrf = someRandomIntern.makeForm("shrubbery creations", "Tree");
	rrf->beSigned(top_sum);
	std::cout << *rrf << std::endl;
	top_sum.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl << std::endl;

	rrf = someRandomIntern.makeForm("presidential pardon", "Bad person");
	rrf->beSigned(top_sum);
	std::cout << *rrf << std::endl;
	top_sum.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	atexit(leaks);
}
