#include "easyfind.h"
#include <iostream>
#include <vector>

void leaks() {
	std::cout << std::endl << "-------------------[ leaks test ]-------------------" << std::endl;
	system("leaks iterator"); }

int main() {
	std::vector<int> vec;

	// 주석처리 시 : 빈 컨테이너 에러 케이스
	vec.push_back(4);
	vec.push_back(1);
	vec.push_back(3);
	vec.push_back(2);

	std::vector<int>::iterator itr;
	try {
		itr = easyfind(vec, 3);
		std::cout << *itr << std::endl;
	} catch (int err) {
		std::cerr << " > easyfind(vec, 3) < " << std::endl;
		if (err == 0)
			std::cerr << "빈 컨테이너입니다." << std::endl;
		else if (err == 1)
			std::cerr << "찾는 항목이 컨테이너에 없습니다." << std::endl;
	}

	try {
		itr = easyfind(vec, 5);
		std::cout << *itr << std::endl;
	} catch (int err) {
		std::cerr << " > easyfind(vec, 5) < " << std::endl;
		if (err == 0)
			std::cerr << "빈 컨테이너입니다." << std::endl;
		else if (err == 1)
			std::cerr << "찾는 항목이 컨테이너에 없습니다." << std::endl;
	}

//	atexit(leaks);
	return 0;
}
