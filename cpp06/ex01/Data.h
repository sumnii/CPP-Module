#ifndef EX01_DATA_H
#define EX01_DATA_H

#include "iostream"

struct Data {
	std::string strData;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif //EX01_DATA_H
