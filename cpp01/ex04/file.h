#ifndef EX04_FILE_H
#define EX04_FILE_H

#include "iostream"
#include "string"
#include "fstream"

enum e_bool {
	OK,
	KO
};

enum e_find {
	SUCCESS = true,
	FAIL = false
};

e_bool check_arg(int argc, char **argv);
e_bool replace_file(const std::string &file_name, const std::string &s1, const std::string &s2);
std::string sed_s1_to_s2(std::string line, std::string s1, std::string s2);
void write_outfile(bool &first, std::ofstream &out, std::string line);

#endif //EX04_FILE_H
