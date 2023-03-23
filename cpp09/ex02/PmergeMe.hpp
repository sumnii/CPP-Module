#ifndef EX02_PMERGEME_HPP
#define EX02_PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <chrono>

class PmergeMe {
private:
	std::vector<int> _vector;
	std::list<int> _list;
	int _k;
	std::chrono::nanoseconds  _vectorCalTime;
	std::chrono::nanoseconds  _listCalTime;

	void printVector();
	void printList();

	void vectorMergeInsertion(int begin, int end);
	void vectorInsertionSort(int begin, int end);
	void vectorMergeSort(int begin, int middle, int end);

	void listMergeInsertion(int begin, int end);
	void listInsertionSort(int begin, int end);
	void listMergeSort(int begin, int middle, int end);

public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(const PmergeMe &ref);
	const PmergeMe &operator=(const PmergeMe &ref);

	void pushArgIntoContainer(int argc, char *argv[]);
	void mergeInsertionSort();
	void printResult(int argc, char *argv[]);
};


#endif //EX02_PMERGEME_HPP
