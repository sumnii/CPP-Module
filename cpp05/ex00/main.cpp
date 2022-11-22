#include "Bureaucrat.h"

int main () {
	try {
		Bureaucrat br("MAN", 0);
	} catch (std::exception &e) {
		std::cout << e.what();
	}
}
