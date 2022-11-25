#include "Form.h"

Form::Form()
		: name("DEFAULT"), is_signed(false),
		  access_to_sign(150), access_to_execute(150) {
	std::cout << "New Form <" << name << ">" << std::endl;
}

Form::Form(std::string name, int access_to_sign, int access_to_execute)
		: name(name), is_signed(false),
		access_to_sign(access_to_sign), access_to_execute(access_to_execute) {
	std::cout << "New Form <" << name << ">";
	if (access_to_sign < 1) {
		std::cout << std::endl << "For sign ";
		throw GradeTooHighException();
	} else if (access_to_sign > 150) {
		std::cout << std::endl << "For sign ";
		throw GradeTooLowException();
	} else if (access_to_execute < 1) {
		std::cout << std::endl << "For execute ";
		throw GradeTooHighException();
	} else if (access_to_execute > 150) {
		std::cout << std::endl << "For execute ";
		throw GradeTooLowException();
	} else
		std::cout << " created." << std::endl;
}

Form::Form(const Form &ref)
		: name(ref.name),
		  is_signed(ref.is_signed),
		  access_to_sign(ref.access_to_sign),
		  access_to_execute(ref.access_to_execute) {
	std::cout << "New Form <" << name << ">" << std::endl;
}

Form &Form::operator=(const Form &ref) {
	this->is_signed = ref.is_signed;
	return (*this);
}

Form::~Form() {
	std::cout << "Destroy Form <" << name << ">" << std::endl;
}


const std::string Form::getName() const {
	return name;
}

bool Form::getIsSigned() const {
	return is_signed;
}

int Form::getAccessToSign() const {
	return access_to_sign;
}

int Form::getAccessToExecute() const {
	return access_to_execute;
}

void Form::beSigned(Bureaucrat &bur) {
	if (bur.getGrade() <= access_to_sign) {
		is_signed = true;
		std::cout << bur.getName() << " signed <" << this->name << ">" << std::endl;
	} else {
		std::cout << bur.getName() << " couldn't sign <" << this->name << "> because ";
		throw GradeTooLowException();
	}
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade is too High!");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade is too Low!");
}

std::ostream &operator<<(std::ostream &out, Form &f) {
	out << "-----------------------------------" << std::endl;
	out << "< " << f.getName() << " >" << std::endl;
	out << "| grade required to SIGN : " << f.getAccessToSign() << std::endl;
	out << "| grade required to EXECUTE : " << f.getAccessToExecute() << std::endl;
	if (f.getIsSigned())
		out << "| this form is SIGNED." << std::endl;
	else
		out << "| this form is UNSIGNED." << std::endl;
	out << "-----------------------------------";
	return (out);
}
