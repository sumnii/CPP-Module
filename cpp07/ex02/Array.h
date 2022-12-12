#ifndef EX02_ARRAY_H
#define EX02_ARRAY_H

template<typename T>
class Array {
private:
	T *array;
	std::size_t size;

	class outOfIndexException : public std::exception {
		const char *what() const throw() {
			return ("Index is out of bounds!");
		}
	};

public:
	Array() {};

	Array(unsigned int n) : size(n) { array = new T[n]; };

	~Array() { delete[] array; };

	Array(const Array &ref) {
		array = new T[ref.size];
		size = ref.size;
		for (size_t i = 0; i < ref.size; ++i)
			array[i] = ref.array[i];
	}

	Array &operator=(const Array &ref) {
		if (this == &ref)
			return (*this);
		delete[] this->array;
		array = new T[ref.size];
		size = ref.size;
		for (size_t i = 0; i < ref.size; ++i)
			array[i] = ref.array[i];
		return (*this);
	}

	T &operator[](std::size_t i) {
		if (i > size)
			throw outOfIndexException();
		return (array[i]);
	}

	const T &operator[](const std::size_t i) const {
		if (i > size)
			throw outOfIndexException();
		return (array[i]);
	}
};

#endif //EX02_ARRAY_H
