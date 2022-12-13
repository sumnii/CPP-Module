#include "Span.h"

Span::Span(unsigned int N)
		: max_count(N), begin(0), end(0) {
	arr = new int[N];
}

Span::~Span() {
	delete[] arr;
}

Span::Span(const Span &ref)
		: max_count(ref.max_count), begin(ref.begin), end(ref.end) {
	arr = new int[ref.max_count];
	for (size_t i = 0; i < max_count; ++i)
		arr[i] = ref.arr[i];
}

Span &Span::operator=(const Span &ref) {
	if (this == &ref)
		return *this;
	delete[]arr;
	arr = new int[ref.max_count];
	for (size_t i = 0; i < max_count; ++i)
		arr[i] = ref.arr[i];
	max_count = ref.max_count;
	begin = ref.begin;
	end = ref.end;
	return *this;
}

void Span::addNumber(int num) {
	arr[end] = num;
	++end;
}
