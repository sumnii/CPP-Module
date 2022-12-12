#include "Data.h"

int main() {
	Data before;
	uintptr_t ptr;
	Data *after;

	before.strData = "sample";
	ptr = serialize(&before);
	std::cout << "origin data :        " << before.strData << std::endl;
	std::cout << "origin address :     " << &before << std::endl;

	after = deserialize(ptr);
	std::cout << "serialized data :    " << after->strData << std::endl;
	std::cout << "serialized address : " << after << std::endl;
}
