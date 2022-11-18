#include "Fixed.h"

int main(void) {
	Fixed a; // 생성자
	Fixed b( a ); // 복사생성자
	Fixed c; // 생성자

	c = b; // 복사생성자

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
