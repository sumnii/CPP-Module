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
	std::cout << br << std::endl;
}
