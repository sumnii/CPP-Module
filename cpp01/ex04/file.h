#ifndef EX04_FILE_H
#define EX04_FILE_H

#include "iostream"
#include "string"
#include "fstream"

enum e_bool {
	OK,
	KO
};

class File {
private:
	std::string file_name;
	std::string s1;
	std::string s2;

public:
};

e_bool check_arg(int argc, char **argv);
e_bool replace_file(const std::string &file_name, const std::string &s1, const std::string &s2);
std::string sed_s1_to_s2(std::string line, std::string s1, std::string s2);

#endif //EX04_FILE_H
