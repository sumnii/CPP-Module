#include "A.h"
#include "B.h"
#include "C.h"
#include "time.h"

Base *generate(void) {
	clock_t time = clock() % 3;

	if (time == 0) {
		std::cout << "A created." << std::endl;
		return (new A);
	}
	else if (time == 1) {
		std::cout << "B created." << std::endl;
		return (new B);
	}
	else {
		std::cout << "C created." << std::endl;
		return (new C);
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p) {
	try {
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		static_cast<void>(a);
	} catch (std::bad_cast) {}
	try {
		B &b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		static_cast<void>(b);
	} catch (std::bad_cast) {}
	try {
		C &c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		static_cast<void>(c);
	} catch (std::bad_cast) {}
}


int main() {
	Base *rand = generate();

	identify(rand);
	identify(*rand);
	delete rand;
}
