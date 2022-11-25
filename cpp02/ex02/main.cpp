#include "Fixed.h"

int main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(42);
	Fixed d(42.0f);
	Fixed e(42.1f);

	std::cout << std::endl;
	std::cout << "===== my test =====" << std::endl;
	std::cout << "c " << c << std::endl;
	std::cout << "d " << d << std::endl;
	std::cout << "e " << e << std::endl << std::endl;

	std::cout << "c == d  " << std::boolalpha << (c==d) << std::endl;
	std::cout << " d > e  " << std::boolalpha << (d>e) << std::endl;
	std::cout << " d < e  " << std::boolalpha << (d<e) << std::endl << std::endl;

	std::cout << "===== 42 test =====" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl << std::endl;

	std::cout << "===== my test =====" << std::endl;
	std::cout << "c   " << c << std::endl;
	std::cout << "--c " << --c << std::endl;
	std::cout << "c   " << c << std::endl;
	std::cout << "c-- " << c-- << std::endl;
	std::cout << "c   " << c << std::endl << std::endl;

	std::cout << "[min] a(" << a << "),b(" << b << ")" << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << "[min] c(" << c << "),d(" << d << ")" << std::endl;
	std::cout << Fixed::min(c, d) << std::endl;

	return 0;
}
