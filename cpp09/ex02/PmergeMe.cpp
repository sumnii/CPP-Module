#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {};

PmergeMe::~PmergeMe() {};

PmergeMe::PmergeMe(const PmergeMe &ref) {
	if (this != &ref) {
		_vector = ref._vector;
		_list = ref._list;
	}
};

const PmergeMe &PmergeMe::operator=(const PmergeMe &ref) {
	if (this != &ref) {
		_vector = ref._vector;
		_list = ref._list;
	}
	return *this;
};