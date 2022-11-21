#ifndef EX01_BRAIN_H
#define EX01_BRAIN_H

#include "iostream"

class Brain {
private:
	std::string ideas[100];

public:
	Brain();
	~Brain();
	Brain(const Brain &ref);
	Brain &operator=(const Brain &ref);

	const std::string getIdeas(size_t i) const;
	void setIdeas(const size_t i, const std::string idea);
};


#endif //EX01_BRAIN_H
