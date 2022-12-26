#include "easyfind.h"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

void leaks() {
	std::cout << std::endl << "-------------------[ leaks test ]-------------------" << std::endl;
	system("leaks iterator"); }

int main() {
	std::vector<int> con;
//	std::list<int> con;
//	std::deque<int> con;

	// 주석처리 시 : 빈 컨테이너 에러 케이스
	con.push_back(4);
	con.push_back(1);
	con.push_back(3);
	con.push_back(2);

	std::vector<int>::iterator itr;
//	std::list<int>::iterator itr;
//	std::deque<int>::iterator itr;
	try {
		int i = 3;
		itr = easyfind(con, i);
		std::cout << *itr << "는 " << std::distance(con.begin(), itr) << "번 인덱스에 있습니다." << std::endl;
	} catch (int err) {
		std::cerr << " > easyfind(con, 3) < " << std::endl;
		if (err == 0)
			std::cerr << "빈 컨테이너입니다." << std::endl;
		else if (err == 1)
			std::cerr << "찾는 항목이 컨테이너에 없습니다." << std::endl;
	}

	std::cout << std::endl;

	try {
		int i = 5;
		itr = easyfind(con, i);
		std::cout << *itr << "는 " << std::distance(con.begin(), itr) << "번 인덱스에 있습니다." << std::endl;
	} catch (int err) {
		std::cerr << " > easyfind(con, 5) < " << std::endl;
		if (err == 0)
			std::cerr << "빈 컨테이너입니다." << std::endl;
		else if (err == 1)
			std::cerr << "찾는 항목이 컨테이너에 없습니다." << std::endl;
	}

//	atexit(leaks);
	return 0;
}
