#include "A.h"
#include "B.h"
#include "C.h"
#include "time.h"

Base *generate(void) {
	clock_t time = clock() % 3;

	if (time == 0)
		return (new A);
	else if (time == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

//void identify(Base& p) {
//
//}


int main() {
	Base *rand = generate();

	identify(rand);
	delete rand;
}
