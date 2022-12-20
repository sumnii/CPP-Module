#include "Convert.h"

int main (int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "type >> ./convert <target>" << std::endl;
		return (1);
	}
	Convert convert(argv[1]);

	convert.detectTheType(argv[1]);
	convert.convertAndPrint();
}
