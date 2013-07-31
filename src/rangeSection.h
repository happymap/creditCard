#include <set>
#include "section.h"
#ifndef RANGESECTION_H_
#define RANGESECTION_H_

class rangeSection: public section {
public:
	rangeSection();
	virtual ~rangeSection();
	rangeSection(int min, int max);
	std::set<int> permutation();

private:
	int min;
	int max;
};

#endif
