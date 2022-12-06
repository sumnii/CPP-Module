#include "Convert.h"

void leaks() {
	std::cout << std::endl << "-------------------[ leaks test ]-------------------" << std::endl;
	system("leaks convert"); }

int main (int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "type >> ./convert <target>" << std::endl;
		return (1);
	}
	Convert convert;

	convert.detectTheType(argv[1]);

//	atexit(leaks);
}
