#include "iostream"
#include "iomanip"

int	main(void) {
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "  ~ THE MEMORY ADDRESS ~  " << std::endl;
	std::cout << std::setw(12) << "brain : " << &brain << std::endl;
	std::cout << std::setw(12) << "stringPTR : " << &stringPTR << std::endl;
	std::cout << std::setw(12) << "stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "  ~ THE VALUE ~  " << std::endl;
	std::cout << std::setw(12) << "brain : " << brain << std::endl;
	std::cout << std::setw(12) << "stringPTR : " << stringPTR << std::endl;
	std::cout << std::setw(12) << "stringREF : " << stringREF << std::endl;
	std::cout << std::endl;
}
