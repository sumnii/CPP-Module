#include "Form.h"
#include "ShrubberyCreationsForm.h"

void leaks() { system("leaks form"); }

int main() {
	Bureaucrat sum("👶SUMIN", 150);
	Bureaucrat top_sum("👑SUMIN", 1);

	ShrubberyCreationsForm tree("Abies");
	std::cout << tree << std::endl;
	try {
		tree.execute(sum);
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

	tree.execute(top_sum);
	std::cout << tree << std::endl;
	std::cout << std::endl;

	atexit(leaks);
}
