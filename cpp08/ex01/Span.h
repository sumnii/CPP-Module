#ifndef EX01_SPAN_H
#define EX01_SPAN_H

#include "iostream"

class Span {
private:
	int *arr;
	unsigned int max_count;
	unsigned int begin;
	unsigned int end;

public:
	Span(unsigned int N);
	~Span();
	Span(const Span &ref);
	Span &operator=(const Span &ref);

	void addNumber(int num);
};


#endif //EX01_SPAN_H
