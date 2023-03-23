#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &ref) {
	if (this != &ref) {
		_vector = ref._vector;
		_list = ref._list;
	}
}

const PmergeMe &PmergeMe::operator=(const PmergeMe &ref) {
	if (this != &ref) {
		_vector = ref._vector;
		_list = ref._list;
	}
	return *this;
}


void PmergeMe::pushArgIntoContainer(int argc, char *argv[]) {
	for (int i = 1; i < argc; ++i) {
		int n = atoi(argv[i]);
		_vector.push_back(n);
		_list.push_back(n);
	}

//	std::vector<int>::iterator v_it = _vector.begin();
//	for(; v_it != _vector.end(); ++v_it) {
//		std::cout << *v_it << " ";
//	}
//
//	std::list<int>::iterator l_it = _list.begin();
//	for(; l_it != _list.end(); ++l_it) {
//		std::cout << *l_it << " ";
//	}
}
