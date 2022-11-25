#ifndef EX02_ROBOTOMYREQUESTFORM_H
#define EX02_ROBOTOMYREQUESTFORM_H

#include "Form.h"

class RobotomyRequestForm : public Form {
private:
	std::string target;
	static void writeAsciiTrees(std::ofstream &out);

public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm &ref);
	RobotomyRequestForm &operator=(RobotomyRequestForm &ref);
	~RobotomyRequestForm();

	void execute(Bureaucrat const &executor) const;
};


#endif //EX02_ROBOTOMYREQUESTFORM_H
