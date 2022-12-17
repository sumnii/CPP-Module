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

void Span::addNumberBunch() {
	srand(static_cast<unsigned int>(time(NULL)));
	while (arr.size() <= max_count) {
		int num = rand();
		arr.push_back(num);
	}

	// arr 내용 출력
//	std::cout << "\n~ arr 내부 출력 ~" << std::endl;
//	for (std::vector<int>::iterator iter = arr.begin(); iter != arr.end(); ++iter)
//		std::cout << *(iter) << " ";
//	std::cout << std::endl;
}

int Span::shortestSpan() {
	if (arr.size() < 2)
		throw noNumberOrOnlyOneException();

	std::sort(arr.begin(), arr.end());
	int shortest = INT_MAX;

	for (std::vector<int>::iterator iter = arr.begin(); iter + 1 != arr.end(); ++iter) {
		int diff = *(iter + 1) - *iter;
		if (diff < shortest)
			shortest = diff;
	}
	return shortest;
}

int Span::longestSpan() {
	if (arr.size() < 2)
		throw noNumberOrOnlyOneException();

	int min = *(std::min_element(arr.begin(), arr.end()));
	int max = *(std::max_element(arr.begin(), arr.end()));
	return (max - min);
}
