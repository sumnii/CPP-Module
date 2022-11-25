#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
		: Form("Shrubbery Creations Form", 72, 45) {
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &ref)
		: Form("Shrubbery Creations Form", 72, 45) {
	this->target = ref.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &ref) {
	this->target = ref.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	std::cout << "Drrrrrrrrrrrriiiiiiillllllllllll......" << std::endl;
}
