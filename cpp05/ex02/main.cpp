#include "Form.h"
#include "ShrubberyCreationsForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

void leaks() { system("leaks form"); }

int main() {
	Bureaucrat sum("👶 sumin", 150);
	Bureaucrat top_sum("👑 SUMIN", 1);

	ShrubberyCreationsForm tree("Abies");
	std::cout << tree << std::endl;
	try {
		sum.executeForm(tree);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		tree.beSigned(sum);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	tree.beSigned(top_sum);
	std::cout << tree << std::endl << std::endl;

	try {
		sum.executeForm(tree);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	top_sum.executeForm(tree);
	std::cout << std::endl << std::endl;

	RobotomyRequestForm robo("genie");
	robo.beSigned(top_sum);
	std::cout << robo << std::endl;
	top_sum.executeForm(robo);
	std::cout << std::endl << std::endl;

	PresidentialPardonForm pardon("Bad person");
	pardon.beSigned(top_sum);
	std::cout << pardon << std::endl;
	top_sum.executeForm(pardon);
	std::cout << std::endl;

	atexit(leaks);
}
