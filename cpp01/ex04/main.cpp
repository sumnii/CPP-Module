#include "file.h"

int main(int argc, char **argv) {
	if (check_arg(argc, argv) == KO)
		return 1;
	if (replace_file(argv[1], argv[2], argv[3]) == KO)
		return 1;
	return 0;
}