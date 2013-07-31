#include <set>

class section{
public:
	section();
	virtual ~section();
	virtual std::set<int> permutation() =0;
};

