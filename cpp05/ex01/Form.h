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
	Form(std::string name, int access_to_sign, int access_to_execute);
	Form(const Form &ref);
	Form &operator=(const Form &ref);
	~Form();

	const std::string getName() const;
	bool getIsSigned() const;
	int getAccessToSign() const;
	int getAccessToExecute() const;

	void beSigned(Bureaucrat &bur);

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Form &f);

#endif //EX01_FORM_H
