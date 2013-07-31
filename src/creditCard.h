#include "setSection.h"
#include "rangeSection.h"
#include <vector>
#include <string>

#ifndef CREDITCARD_H_
#define CREDITCARD_H_

class creditCard {
public:
	creditCard();
	virtual ~creditCard();
	creditCard(std::vector<section> requirements);
	std::set<std::string> output();

private:
	std::vector<section> requirements;
	std::set<std::string> results;
	void buildOutput(std::vector<section> inpu, std::string front);
	std::string autoFillZero(std::string input);
};

#endif
