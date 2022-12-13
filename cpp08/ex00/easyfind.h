#ifndef EX00_EASYFIND_H
#define EX00_EASYFIND_H

#include "algorithm"

template<typename T>
typename T::iterator easyfind(T &container, int i) {
	typename T::iterator itr;

	if (container.begin() == container.end())
		throw 0;
	itr = find(container.begin(), container.end(), i);
	if (itr == container.end())
		throw 1;
	return itr;
}

#endif //EX00_EASYFIND_H
