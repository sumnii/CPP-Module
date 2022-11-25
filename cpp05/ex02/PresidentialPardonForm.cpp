#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
		: Form("Shrubbery Creations Form", 25, 5) {
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &ref)
		: Form("Shrubbery Creations Form", 25, 5) {
	this->target = ref.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &ref) {
	this->target = ref.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	std::cout << executor.getName() << " executed <" << this->getName() << ">" << std::endl;
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
