//============================================================================
// Name        : creditCard.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "creditCard.h"
#include <iostream>
#include <vector>

creditCard::creditCard(){

}

creditCard::~creditCard(){

}

creditCard::creditCard(std::vector<section> requirements){
	this->requirements = requirements;
}

std::set<std::string> creditCard::output(){
	this->buildOutput(requirements, "");
	return this->results;
}

void creditCard::buildOutput(std::vector<section> input, std::string front){
	if(input.size()>0){
		std::set<int> sec = input.at(0).permutation();
		std::set<int>::iterator it;
		input.erase(input.begin());
		for(it=sec.begin(); it<sec.end(); it++){
			std::string str = static_cast<std::ostringstream*>( &(std::ostringstream() << *it) )->basic_ostringstream; //convert int to string
			front = front + this->autoFillZero(str);
			//recursive
			this->buildOutput(input, front);
		}
	}
	//if no sections left, add string to result set
	else if(input.size() == 0){
		this->results.insert(front);
	}
}

std::string creditCard::autoFillZero(std::string input){
	switch(input.size()){
	case 0:
		return "0000";
		break;
	case 1:
		return "000" + input;
		break;
	case 2:
		return "00" + input;
		break;
	case 3:
		return "0" + input;
		break;
	default:
		return input;
		break;
	}

	return input;
}
