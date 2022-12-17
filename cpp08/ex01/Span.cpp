#include "Span.h"

Span::Span(unsigned int N)
		: max_count(N) {}

Span::~Span() {
}

Span::Span(const Span &ref)
		: arr(ref.arr), max_count(ref.max_count) {}

Span &Span::operator=(const Span &ref) {
	if (this != &ref) {
		arr = ref.arr;
		max_count = ref.max_count;
	}
	return *this;
}

void Span::addNumber(int num) {
	if (max_count == arr.size())
		throw noSpaceException();
	arr.push_back(num);
}
