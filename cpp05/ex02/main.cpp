#include "Form.h"
#include "ShrubberyCreationsForm.h"

void leaks() { system("leaks form"); }

int main() {
	Bureaucrat sum("👶 sumin", 150);
	Bureaucrat top_sum("👑 SUMIN", 1);

	ShrubberyCreationsForm tree("Abies");
	std::cout << tree << std::endl;
	try {
//		tree.execute(sum);
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
//		tree.execute(sum);
		sum.executeForm(tree);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
//	tree.execute(top_sum);
	top_sum.executeForm(tree);
	std::cout << std::endl;

	atexit(leaks);
}
