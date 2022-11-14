#ifndef EX04_FILE_H
#define EX04_FILE_H

#include "iostream"
#include "string"
#include "fstream"

enum e_bool {
	OK,
	KO
};

e_bool check_arg(int argc, char **argv);

#endif //EX04_FILE_H
