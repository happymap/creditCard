#include "setSection.h"

setSection::setSection(){

}

setSection::~setSection(){

}

setSection::setSection(std::set<int> input){
	this->input = input;
}

std::set<int> setSection::permutation(){
	return this->input;
}

