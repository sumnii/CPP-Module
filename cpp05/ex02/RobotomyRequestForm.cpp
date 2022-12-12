#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
		: Form("Robotomy Request Form", 72, 45) {
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &ref)
		: Form("Robotomy Request Form", 72, 45) {
	this->target = ref.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &ref) {
	this->target = ref.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (this->getIsSigned() == false) {
		throw IsUnsignedException();
	} else if (this->getAccessToExecute() < executor.getGrade()) {
		throw GradeTooLowException();
	} else {
		std::cout << "Drrrrrrrrrrrriiiiiiillllllllllll......" << std::endl;
		this->robotomize();
	}
}

void RobotomyRequestForm::robotomize() const {
	int rand = clock() % 2;

	if (rand)
		std::cout << target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << target << " robotomy failed.." << std::endl;
}
