#include "Bureaucrat.h"

int main () {
	Bureaucrat *br;
	try {
		br = new Bureaucrat("MAN", 0);
	} catch (std::exception &e) {
		std::cout << e.what();
		delete br;
	}
	std::cout << *br << std::endl;
}
