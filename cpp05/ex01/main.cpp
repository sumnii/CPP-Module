#include "Form.h"

void leaks() {
	std::cout << std::endl << "-------------------[ leaks test ]-------------------" << std::endl;
	system("leaks form"); }
	
int main() {
	Bureaucrat sum("👶SUMIN", 150);
	Bureaucrat top_sum("👑SUMIN", 1);

	try {
		Form f1("BUY BUILDING", 0, 151);
		std::cout << f1 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	Form f2("BUY LAPTOP", 1, 1);
	std::cout << f2 << std::endl << std::endl;

	try {
		f2.beSigned(sum);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	f2.beSigned(top_sum);

	std::cout << std::endl;

	atexit(leaks);
}
