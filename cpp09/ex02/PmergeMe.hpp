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

	void vectorMergeInsertionSort(int begin, int end);
	void vectorInsertionSort(int begin, int end);
	void vectorMergeSort(int begin, int middle, int end);

	void listMergeInsertionSort(std::list<int>::iterator begin, std::list<int>::iterator end);
	void listInsertionSort(std::list<int>::iterator begin, std::list<int>::iterator end);
	void listMergeSort(std::list<int>::iterator begin, std::list<int>::iterator middle, std::list<int>::iterator end);

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
