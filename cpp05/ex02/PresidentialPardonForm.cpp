#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
		: Form("Presidential Pardon Form", 25, 5) {
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &ref)
		: Form("Presidential Pardon Form", 25, 5) {
	this->target = ref.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &ref) {
	this->target = ref.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (this->getIsSigned() == false) {
		throw IsUnsignedException();
	} else if (this->getAccessToExecute() < executor.getGrade()) {
		throw GradeTooLowException();
	} else {
		std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}
