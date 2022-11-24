#ifndef EX01_FORM_H
#define EX01_FORM_H

#include "Bureaucrat.h"

class Form {
private:
	const std::string	name;
	bool				is_signed;
	const int 			access_to_sign;
	const int 			access_to_execute;

public:
	Form();
	Form(const Form &ref);
	Form &operator=(const Form &ref);
	~Form();

	const std::string getName() const;
	bool getIsSigned() const;
	const int getAccessToSign() const;
	const int getAccessToExecute() const;

	void beSigned(Bureaucrat &bur);

	class GradeTooHighException : std::exception {
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : std::exception {
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Form &f);

#endif //EX01_FORM_H
