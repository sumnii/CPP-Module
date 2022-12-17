#ifndef EX01_SPAN_H
#define EX01_SPAN_H

#include <iostream>
#include <algorithm>
#include <vector>

class Span {
private:
	std::vector<int> arr;
	unsigned int max_count;

	class noSpaceException : public std::exception {
		const char *what() const throw() {
			return "No space in Span class!";
		}
	};

	class noNumberOrOnlyOneException : public std::exception {
		const char * what() const throw() {
			return "There are No numbers or only one number!";
		}
	};

public:
	Span(unsigned int N);
	~Span();
	Span(const Span &ref);
	Span &operator=(const Span &ref);

	void addNumber(int num);
	int shortestSpan();
	int longestSpan();
};


#endif //EX01_SPAN_H
