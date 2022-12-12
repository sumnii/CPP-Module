#include <iostream>
#include <Array.h>

#define MAX_VAL 750

int main(int, char **) {
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++) {
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		std::cout << " ~ 깊은 복사 테스트 ~ " << std::endl;
		Array<int> tmp = numbers;
		Array<int> test(tmp);
		std::cout << "numbers[0] : " << numbers[0] << std::endl;
		std::cout << "    tmp[0] : " << tmp[0] << std::endl;
		std::cout << "   test[0] : " << test[0] << std::endl;
		std::cout << "! tmp[0]에 10 넣고 test[0]에 100 넣기 !" << std::endl;
		tmp[0] = 10;
		test[0] = 100;
		std::cout << "numbers[0] : " << numbers[0] << std::endl;
		std::cout << "    tmp[0] : " << tmp[0] << std::endl;
		std::cout << "   test[0] : " << test[0] << std::endl << std::endl;
	}

	for (int i = 0; i < MAX_VAL; i++) {
		if (mirror[i] != numbers[i]) {
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try {
		numbers[-2] = 0;
	}
	catch (const std::exception &e) {
		std::cerr << " > numbers[-2] = 0; <" << std::endl;
		std::cerr << e.what() << '\n';
	}
	try {
		numbers[MAX_VAL] = 0;
	}
	catch (const std::exception &e) {
		std::cerr << " > numbers[MAX_VAL] = 0; <" << std::endl;
		std::cerr << e.what() << '\n';
	}

	std::cout << " ~ 요소 n개 배열 확인 ~" << std::endl;
	std::cout << "numbers의 요소수 : " << numbers.size() << std::endl;

	for (int i = 0; i < MAX_VAL; i++) {
		numbers[i] = rand();
	}
	delete[] mirror;
	return 0;
}
