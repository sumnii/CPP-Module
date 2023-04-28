#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _k(3) {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &ref) {
	if (this != &ref) {
		_k = ref._k;
		_vector = ref._vector;
		_list = ref._list;
		_vectorCalTime = ref._vectorCalTime;
		_listCalTime = ref._listCalTime;
	}
}

const PmergeMe &PmergeMe::operator=(const PmergeMe &ref) {
	if (this != &ref) {
		_k = ref._k;
		_vector = ref._vector;
		_list = ref._list;
		_vectorCalTime = ref._vectorCalTime;
		_listCalTime = ref._listCalTime;
	}
	return *this;
}


void PmergeMe::printVector() {
	std::vector<int>::iterator it = _vector.begin();
	for(; it != _vector.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::printList() {
	std::list<int>::iterator it = _list.begin();
	for (; it != _list.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}


void PmergeMe::pushArgIntoContainer(int argc, char *argv[]) {
	for (int i = 1; i < argc; ++i) {
		int n = atoi(argv[i]);
		if (n < 0)
			throw "Error";
		_vector.push_back(n);
		_list.push_back(n);
	}
}

void PmergeMe::mergeInsertionSort() {
	std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
	vectorMergeInsertionSort(0, _vector.size() - 1);
	std::chrono::system_clock::time_point end = std::chrono::system_clock::now();
	_vectorCalTime = end - start;

	start = std::chrono::system_clock::now();
	listMergeInsertionSort(_list.begin(), _list.end());
	end = std::chrono::system_clock::now();
	_listCalTime = end - start;
}

void PmergeMe::vectorMergeInsertionSort(int begin, int end) {
	if (begin >= end)
		return ;

	if (end - begin + 1 <= _k) {
		vectorInsertionSort(begin, end);
		return ;
	}

	int middle = begin + (end - begin) / 2;

	vectorMergeInsertionSort(begin, middle);
	vectorMergeInsertionSort(middle + 1, end);

	vectorMergeSort(begin, middle, end);
}

void PmergeMe::vectorInsertionSort(int begin, int end) {
	for (int iKey = begin + 1; iKey <= end; ++iKey) {
		int key = _vector[iKey];
		int iLow = iKey - 1;

		while (begin <= iLow) {
			if (_vector[iLow] < key)
				break ;
			_vector[iLow + 1] = _vector[iLow];
			--iLow;
		}
		_vector[iLow + 1] = key;
	}
}

void PmergeMe::vectorMergeSort(int begin, int middle, int end) {
	int pointer1 = begin;
	int pointer2 = middle + 1;
	std::vector<int> sortedArr;

	while (pointer1 <= middle && pointer2 <= end) {
		if (_vector[pointer1] < _vector[pointer2]) {
			sortedArr.push_back(_vector[pointer1]);
			++pointer1;
		}
		else if (_vector[pointer1] > _vector[pointer2]) {
			sortedArr.push_back(_vector[pointer2]);
			++pointer2;
		} else {
			sortedArr.push_back(_vector[pointer1]);
			sortedArr.push_back(_vector[pointer2]);
			++pointer1;
			++pointer2;
		}
	}

	while (pointer1 <= middle) {
		sortedArr.push_back(_vector[pointer1]);
		++pointer1;
	}

	while (pointer2 <= end) {
		sortedArr.push_back(_vector[pointer2]);
		++pointer2;
	}

	for (unsigned long i = 0; i < sortedArr.size(); ++i)
		_vector[begin++] = sortedArr[i];
}

void PmergeMe::listMergeInsertionSort(std::list<int>::iterator begin,
									  std::list<int>::iterator end) {
	int partSize = std::distance(begin, end);

	if (partSize <= _k) {
		listInsertionSort(begin, end);
		return ;
	}

	std::list<int>::iterator middle = begin;
	std::advance(middle, partSize / 2);

	listMergeInsertionSort(begin, middle);
	listMergeInsertionSort(middle, end);
	listMergeSort(begin, middle, end);
}

void PmergeMe::listInsertionSort(std::list<int>::iterator begin,
								 std::list<int>::iterator end) {
	std::list<int>::iterator itKey = std::next(begin);
	for (; itKey != end; ++itKey) {
		int key = *itKey;
		std::list<int>::iterator itLow = itKey;

		while (itLow != begin) {
			if (*std::prev(itLow) < key)
				break ;
			*itLow = *std::prev(itLow);
			--itLow;
		}
		*itLow = key;
	}
}

void PmergeMe::listMergeSort(std::list<int>::iterator begin,
							 std::list<int>::iterator middle,
							 std::list<int>::iterator end) {
	std::list<int>::iterator pointer1 = begin;
	std::list<int>::iterator pointer2 = middle;
	std::list<int> sortedArr;

	while (pointer1 != middle && pointer2 != end) {
		if (*pointer1 < *pointer2) {
			sortedArr.push_back(*pointer1);
			++pointer1;
		}
		else if (*pointer1 > *pointer2) {
			sortedArr.push_back(*pointer2);
			++pointer2;
		} else {
			sortedArr.push_back(*pointer1);
			sortedArr.push_back(*pointer2);
			++pointer1;
			++pointer2;
		}
	}

	while (pointer1 != middle) {
		sortedArr.push_back(*pointer1);
		++pointer1;
	}

	while (pointer2 != end) {
		sortedArr.push_back(*pointer2);
		++pointer2;
	}

	for (; begin != end; ++begin) {
		*begin = sortedArr.front();
		sortedArr.pop_front();
	}
}


void PmergeMe::printResult(int argc, char *argv[]) {
	std::cout << "Before: ";
	for (int i = 1; i < argc; ++i)
		std::cout << argv[i] << " ";
	std::cout << std::endl;

	std::cout << "After: ";
	printVector();

	std::cout << "Time to process a range of " << argc - 1
			  << " elements with std::vector : "
			  << _vectorCalTime.count() / 1000 << " us" << std::endl;

	std::cout << "Time to process a range of " << argc - 1
			  << " elements with std::list : "
			  << _listCalTime.count() / 1000 << " us" << std::endl;
}
