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
		const char *what() const;
	};
	class GradeTooLowException  : public std::exception {
		const char *what() const;
	};
};


#endif //EX00_BUREAUCRAT_H
