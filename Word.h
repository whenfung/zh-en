#ifndef Word_h
#define Word_h

#include <iostream>
#include <string>

class Word{
public:
	std::string chinese;
	std::string english;
	Word();
	Word(std::string, std::string);
	void set_word(std::string, std::string); 
	void print();
	~Word();
};

Word::Word() :
	chinese("null"), english("null"){}

Word::Word(std::string chinese, std::string english) :
	chinese(chinese), english(english){}
	
void Word::set_word(std::string chinese, std::string english) {
	this->chinese = chinese;
	this->english = english;
}

void Word::print(){
	std::cout << chinese << "\t : " << english << std::endl;
} 

Word::~Word(){}

#endif
