#ifndef EX00_BUREAUCRAT_H
#define EX00_BUREAUCRAT_H

#include "iostream"

class Bureaucrat {
private:
	const std::string name;
	int grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &ref);
	Bureaucrat &operator=(const Bureaucrat &ref);

	const std::string &getName() const;
	int getGrade() const;

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};
	class GradeTooLowException  : public std::exception {
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat b);

#endif //EX00_BUREAUCRAT_H
