#include "iter.h"

int main() {
	int i_arr[5] = {1, 2, 3, 4, 5};

	std::cout << "int 배열 출력" << std::endl;
	iter(i_arr, sizeof(i_arr) / sizeof(int), print_t);
	std::cout << std::endl;

	std::cout << "add_num 함수 실행 (+1)" << std::endl;
	iter(i_arr, sizeof(i_arr) / sizeof(int), add_num);

	std::cout << "int 배열 출력" << std::endl;
	iter(i_arr, sizeof(i_arr) / sizeof(int), print_t);
	std::cout << std::endl << std::endl;


	char c_arr[3] = {'a', 'b', 'c'};
	std::cout << "char 배열 출력" << std::endl;
	iter(c_arr, sizeof(c_arr) / sizeof(char), print_t);
	std::cout << std::endl;

	std::cout << "add_num 함수 실행 (+1)" << std::endl;
	iter(c_arr, sizeof(c_arr) / sizeof(char), add_num);

	std::cout << "char 배열 출력" << std::endl;
	iter(c_arr, sizeof(c_arr) / sizeof(char), print_t);
	std::cout << std::endl << std::endl;


	std::string s_arr[2] = {"hello", "world"};
	std::cout << "string 배열 출력" << std::endl;
	iter(s_arr, sizeof(s_arr) / sizeof(std::string), print_t);
	std::cout << std::endl;

	return 0;
}
