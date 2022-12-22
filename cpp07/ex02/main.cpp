#include <iostream>
#include <Array.h>

#define MAX_VAL 750

void leaks() {
	std::cout << std::endl << "-------------------[ leaks test ]-------------------" << std::endl;
	system("leaks template");
}

int main(int, char **) {
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];

	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++) {
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	{ // 깊은 복사 테스트
		std::cout << " ~ 깊은 복사 테스트 ~ " << std::endl;
		Array<int> assign = numbers;
		Array<int> copy(assign);
		std::cout << "numbers[0] : " << numbers[0] << std::endl;
		std::cout << " assign[0] : " << assign[0] << std::endl;
		std::cout << "   copy[0] : " << copy[0] << "\n" << std::endl;

		std::cout << ">> assign[0]에 10, copy[0]에 100 넣기" << std::endl;
		assign[0] = 10;
		copy[0] = 100;
		std::cout << "numbers[0] : " << numbers[0] << std::endl;
		std::cout << " assign[0] : " << assign[0] << std::endl;
		std::cout << "   copy[0] : " << copy[0] << std::endl << std::endl;
	}

	for (int i = 0; i < MAX_VAL; i++) {
		if (mirror[i] != numbers[i]) {
			std::cerr << "didn't save the same value!!\n" << std::endl;
			return 1;
		}
	}

	try { // 인덱스가 범위를 벗어날 때
		numbers[-2] = 0;
	} catch (const std::exception &e) {
		std::cerr << " > numbers[-2] = 0; <" << std::endl;
		std::cerr << e.what() << "\n" << std::endl;
	}
	try {
		numbers[MAX_VAL] = 0;
	} catch (const std::exception &e) {
		std::cerr << " > numbers[MAX_VAL] = 0; <" << std::endl;
		std::cerr << e.what() << "\n" << std::endl;
	}

	std::cout << " ~ 요소 n개 배열 확인 ~" << std::endl;
	std::cout << "numbers의 요소수 : " << numbers.size() << std::endl;

	for (int i = 0; i < MAX_VAL; i++) {
		numbers[i] = rand();
	}
	delete[] mirror;

//	atexit(leaks);
	return 0;
}
