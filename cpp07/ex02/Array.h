#ifndef EX02_ARRAY_H
#define EX02_ARRAY_H

#include "iostream"

template <typename T>
class Array {
private:
	T *array;

public:
	Array() : array(NULL) {};
	Array(unsigned int n) { array = new T[n]; };
	~Array() { delete[] array; };
	Array(const Array &ref) {
		size_t n = sizeof(ref.array) / sizeof(T);

		array = new T[n];
		for (size_t i = 0; i < n; ++i) {
			array[i] = ref.array[i];
		}
	}
	Array &operator=(const Array &ref) {
		if (*this == ref)
			return (*this);
		delete[] this->array;
		size_t n = sizeof(ref.array) / sizeof(T);
		array = new T[n];
		for (size_t i = 0; i < n; ++i) {
			array[i] = ref.array[i];
		}
		return (*this);
	}
};

#endif //EX02_ARRAY_H
