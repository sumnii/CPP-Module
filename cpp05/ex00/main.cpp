#include "Bureaucrat.h"

int main () {
	Bureaucrat br;
	try {
		br = Bureaucrat("MAN", 0);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << br << std::endl;
	try {
		br.increaseGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << br << std::endl;
	br.DecreaseGrade();
	std::cout << br << std::endl;
	br.DecreaseGrade();
	std::cout << br << std::endl << std::endl;

	Bureaucrat sum("sumin", 150);
	std::cout << sum << std::endl;
	try {
		sum.DecreaseGrade();
		std::cout << sum << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	sum.increaseGrade();
	std::cout << sum << std::endl;
}
