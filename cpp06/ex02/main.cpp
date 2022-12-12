#include "A.h"
#include "B.h"
#include "C.h"
#include "time.h"

Base *generate(void) {
	A *a = NULL;
	B *b = NULL;
	C *c = NULL;
	clock_t time = clock() % 3;

	if (time == 0)
		return a;
	else if (time == 1)
		return b;
	else
		return c;
}

//void identify(Base* p) {
//
//}
//
//void identify(Base& p) {
//
//}


int main() {
	Base *rand = generate();
}
