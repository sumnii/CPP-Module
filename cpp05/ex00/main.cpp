#include "Bureaucrat.h"

void leaks() { system("leaks bureaucrat"); }

int main () {
	Bureaucrat man;
	try {
		man = Bureaucrat("MAN", 0);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << man << std::endl << std::endl;

	Bureaucrat sum1("SUMIN", 1);
	std::cout << sum1 << std::endl;
	try {
		sum1.increaseGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << sum1 << std::endl;
	sum1.DecreaseGrade();
	std::cout << sum1 << std::endl;
	sum1.DecreaseGrade();
	std::cout << sum1 << std::endl << std::endl;

	Bureaucrat sum2("sumin", 150);
	std::cout << sum2 << std::endl;
	try {
		sum2.DecreaseGrade();
		std::cout << sum2 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	sum2.increaseGrade();
	std::cout << sum2 << std::endl;

	atexit(leaks);
}
