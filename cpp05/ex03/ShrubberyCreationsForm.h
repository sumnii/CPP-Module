#ifndef EX02_SHRUBBERYCREATIONSFORM_H
#define EX02_SHRUBBERYCREATIONSFORM_H

#include "Form.h"
#include "fstream"

class ShrubberyCreationsForm : public Form {
private:
	std::string target;
	static void writeAsciiTrees(std::ofstream &out);

public:
	ShrubberyCreationsForm(std::string target);
	ShrubberyCreationsForm(ShrubberyCreationsForm &ref);
	ShrubberyCreationsForm &operator=(ShrubberyCreationsForm &ref);
	~ShrubberyCreationsForm();

	void execute(Bureaucrat const &executor) const;
};


#endif //EX02_SHRUBBERYCREATIONSFORM_H
