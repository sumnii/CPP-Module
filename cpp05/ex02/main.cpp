#include "Form.h"
#include "ShrubberyCreationsForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

void leaks() {
	std::cout << std::endl << "-------------------[ leaks test ]-------------------" << std::endl;
	system("leaks form"); }

int main() {
	Bureaucrat low_sum("👶 sumin", 150);
	Bureaucrat high_sum("👑 SUMIN", 1);

	ShrubberyCreationsForm tree("Abies");
	std::cout << tree << std::endl;
	low_sum.executeForm(tree);
	high_sum.signForm(tree);
	std::cout << tree << std::endl;
	low_sum.executeForm(tree);
	high_sum.executeForm(tree);
	std::cout << std::endl << std::endl;

	RobotomyRequestForm robo("genie");
	high_sum.signForm(robo);
	std::cout << robo << std::endl;
	high_sum.executeForm(robo);
	std::cout << std::endl << std::endl;

	PresidentialPardonForm pardon("Bad person");
	high_sum.signForm(pardon);
	std::cout << pardon << std::endl;
	high_sum.executeForm(pardon);
	std::cout << std::endl;

	atexit(leaks);
}
