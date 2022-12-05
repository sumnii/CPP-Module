#ifndef EX00_BUREAUCRAT_H
#define EX00_BUREAUCRAT_H

#include "iostream"

class Form;

class Bureaucrat {
private:
	const std::string name;
	int grade;

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};
	class GradeTooLowException  : public std::exception {
	public:
		const char *what() const throw();
	};

public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &ref);
	Bureaucrat &operator=(const Bureaucrat &ref);

	const std::string &getName() const;
	int getGrade() const;
	void increaseGrade();
	void DecreaseGrade();

	void executeForm(Form const &form);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &b);

#endif //EX00_BUREAUCRAT_H
