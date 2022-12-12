#ifndef EX01_ITER_H
#define EX01_ITER_H

#include "iostream"

template <typename T>
void iter(T *array, size_t len, void (*func)(T &t)) {
	for (size_t i = 0; i < len; ++i) {
		func(array[i]);
	}
}

template <typename T>
void print_t(T &t) {
	std::cout << t << " ";
}

template <typename T>
void add_num(T &t) {
	t = t + 3;
}

#endif //EX01_ITER_H
