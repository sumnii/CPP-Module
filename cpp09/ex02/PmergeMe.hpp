#ifndef EX02_PMERGEME_HPP
#define EX02_PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>

class PmergeMe {
private:
	std::vector<int> _vector;
	std::list<int> _list;

public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(const PmergeMe &ref);
	const PmergeMe &operator=(const PmergeMe &ref);
};


#endif //EX02_PMERGEME_HPP
