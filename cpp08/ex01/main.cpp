#include "Span.h"

int main()
{
	{ // 5개 공간의 Span 클래스
		Span sp = Span(5);

		try {
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			// N개의 요소가 이미 찼음
//		sp.addNumber(10);
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}

		try {
			std::cout << "가장 짧은 범위 : " << sp.shortestSpan() << std::endl;
			std::cout << "가장 긴 범위 : " << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << std::endl;

	{ // 10000개 공간의 Span 클래스
		Span sp = Span(10000);

		sp.addNumberBunch();

		try {
			std::cout << "가장 짧은 범위 : " << sp.shortestSpan() << std::endl;
			std::cout << "가장 긴 범위 : " << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}

	return 0;
}
