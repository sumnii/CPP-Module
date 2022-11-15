#ifndef EX05_HARL_H
#define EX05_HARL_H

#include "iostream"

class Harl {
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	void complain(std::string level);
};

#endif //EX05_HARL_H
