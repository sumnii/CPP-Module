#include "Brain.h"

Brain::Brain() {
	std::cout << "~ Brain constructor called ~" << std::endl;
}

Brain::~Brain() {
	std::cout << "~ Brain destructor called ~" << std::endl;
}

Brain::Brain(const Brain &ref) {
	std::cout << "~ Brain copy constructor called ~" << std::endl;
	for (size_t i = 0; i < 100; ++i)
		ideas[i] = ref.ideas[i];
}

Brain &Brain::operator=(const Brain &ref) {
	std::cout << "~ Brain copy assignment operator called ~" << std::endl;
	for (size_t i = 0; i < 100; ++i)
		this->ideas[i] = ref.ideas[i];
	return *this;
}

const std::string Brain::getIdeas(size_t i) const {
	return ideas[i];
}

void Brain::setIdeas(size_t i, std::string idea) {
	ideas[i] = idea;
}
