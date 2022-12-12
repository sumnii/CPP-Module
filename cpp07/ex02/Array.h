#ifndef EX02_ARRAY_H
#define EX02_ARRAY_H

template<typename T>
class Array {
private:
	T *array;
	size_t _size;

	class outOfIndexException : public std::exception {
		const char *what() const throw() {
			return ("Index is out of bounds!");
		}
	};

public:
	Array() {};

	Array(unsigned int n) : _size(n) { array = new T[n]; };

	~Array() { delete[] array; };

	Array(const Array &ref) {
		array = new T[ref._size];
		_size = ref._size;
		for (size_t i = 0; i < ref._size; ++i)
			array[i] = ref.array[i];
	}

	Array &operator=(const Array &ref) {
		if (this == &ref)
			return (*this);
		delete[] this->array;
		array = new T[ref._size];
		_size = ref._size;
		for (size_t i = 0; i < ref._size; ++i)
			array[i] = ref.array[i];
		return (*this);
	}

	T &operator[](size_t i) {
		if (i > _size)
			throw outOfIndexException();
		return (array[i]);
	}

	const T &operator[](const size_t i) const {
		if (i > _size)
			throw outOfIndexException();
		return (array[i]);
	}

	size_t size() const { return (_size); }
};

#endif //EX02_ARRAY_H
