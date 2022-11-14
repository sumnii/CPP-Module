#include "file.h"

e_bool check_arg(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "  !! This program needs a filename, and two strings !!" << std::endl;
		return KO;
	} else if (((std::string) argv[1]).empty()
			   || ((std::string) argv[2]).empty()
			   || ((std::string) argv[3]).empty()) {
		std::cout << "  !! Parameters are empty !!" << std::endl;
		return KO;
	}
	return OK;
}

e_bool replace_file(const std::string &file_name, const std::string &s1, const std::string &s2) {
	std::ifstream in(file_name);
	std::ofstream out(file_name + ".replace", std::ios::trunc);
	std::string line;

	if (in.is_open()) {
		while (getline(in, line)) {
			std::string sed = sed_s1_to_s2(line, s1, s2);
			out << sed;
		}
	} else {
		std::cout << "  !! Wrong filename !!" << std::endl;
		return KO;
	}
	return OK;
}

std::string sed_s1_to_s2(std::string line, std::string s1, std::string s2) {
	size_t idx = line.find(s1);
	std::string front = line.substr(0, idx);
	std::string back = line.substr(idx + s1.size());

	if (idx != std::string::npos) {
		while ((idx = back.find(s1)) != std::string::npos) {
			front = front + s2 + back.substr(0, idx);
			back = back.substr(idx + s1.size());
		}
		return (front + s2 + back);
	} else {
		return (line);
	}
}