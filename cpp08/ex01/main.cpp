#include "Span.h"

void leaks() {
	std::cout << std::endl << "-------------------[ leaks test ]-------------------" << std::endl;
	system("leaks iterator"); }

int main()
{
	Span sp = Span(5);

	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(10);
		sp.addNumber(100);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;

//	atexit(leaks);
	return 0;
}
