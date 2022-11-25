#ifndef EX02_PRESIDENTIALPARDONFORM_H
#define EX02_PRESIDENTIALPARDONFORM_H

#include "Form.h"

class PresidentialPardonForm : public Form {
private:
	std::string target;

public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm &ref);
	PresidentialPardonForm &operator=(PresidentialPardonForm &ref);
	~PresidentialPardonForm();

	void execute(Bureaucrat const &executor) const;
};


#endif //EX02_PRESIDENTIALPARDONFORM_H
