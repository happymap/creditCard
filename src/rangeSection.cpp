#include "rangeSection.h"

rangeSection::rangeSection(){
	this->min = 0;
	this->max = 0;

}

rangeSection::~rangeSection(){

}

rangeSection::rangeSection(int min, int max){
	this->min = min;
	this->max = max;
}

std::set<int> rangeSection::permutation(){
	std::set<int> output;
	for(int i=this->min; i<=this->max; i++){
		output.insert(i);
	}
	return output;
}
