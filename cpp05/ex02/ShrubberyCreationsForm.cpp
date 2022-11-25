#include "ShrubberyCreationsForm.h"

ShrubberyCreationsForm::ShrubberyCreationsForm(std::string target)
		: Form("Shrubbery Creations Form", 145, 137) {
	this->target = target;
}

ShrubberyCreationsForm::ShrubberyCreationsForm(ShrubberyCreationsForm &ref)
		: Form("Shrubbery Creations Form", 145, 137) {
	this->target = ref.target;
}

ShrubberyCreationsForm &ShrubberyCreationsForm::operator=(ShrubberyCreationsForm &ref) {
	this->target = ref.target;
	return *this;
}

ShrubberyCreationsForm::~ShrubberyCreationsForm() {}

void ShrubberyCreationsForm::execute(Bureaucrat const &executor) const {
	if (this->getIsSigned() == false) {
		std::cout << "<" << this->getName() << "> ";
		throw IsNotSignedException();
	} else if (this->getAccessToExecute() < executor.getGrade()) {
		std::cout << executor.getName() << " couldn't execute <" << this->getName() << "> because ";
		throw GradeTooLowException();
	} else {
		std::ofstream out(this->target + "_shrubbery", std::ios::trunc);
		writeAsciiTrees(out);
		std::cout << executor.getName() << " executed <" << this->getName() << ">" << std::endl;
	}
}

const char *ShrubberyCreationsForm::IsNotSignedException::what() const throw() {
	return ("is not signed!!");
}

void ShrubberyCreationsForm::writeAsciiTrees(std::ofstream &out) {
	out << "           \\/ |    |/" << std::endl
		<< "        \\/ / \\||/  /_/___/_" << std::endl
		<< "         \\/   |/ \\/" << std::endl
		<< "    _\\__\\_\\   |  /_____/_" << std::endl
		<< "           \\  | /          /" << std::endl
		<< "  __ _-----`  |{,-----------~" << std::endl
		<< "            \\ }{" << std::endl
		<< "             }{{" << std::endl
		<< "             }}{" << std::endl
		<< "             {{}" << std::endl
		<< "       , -=-~{ .-^- _" << std::endl
		<< "              `}" << std::endl;
}
