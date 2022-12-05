#include "Form.h"
#include "ShrubberyCreationsForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"

void leaks() { system("leaks intern"); }

int main() {
	Bureaucrat top_sum("👑 SUMIN", 1);
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;
	rrf->beSigned(top_sum);
	top_sum.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl << std::endl;

	ShrubberyCreationsForm tree("Abies");
	tree.beSigned(top_sum);
	std::cout << tree << std::endl;
	top_sum.executeForm(tree);
	std::cout << std::endl << std::endl;

	PresidentialPardonForm pardon("Bad person");
	pardon.beSigned(top_sum);
	std::cout << pardon << std::endl;
	top_sum.executeForm(pardon);
	std::cout << std::endl;

	atexit(leaks);
}
