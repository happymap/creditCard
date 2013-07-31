#include <set>
#ifndef SETSECTION_H_
#define SETSECTION_H_

class setSection: public section {
public:
	setSection();
	virtual ~setSection();
	setSection(std::set<int> input);
	std::set<int> permutation();

private:
	std::set<int> input;
};

#endif
