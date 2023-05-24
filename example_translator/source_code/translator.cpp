// translator.cpp
//

#include "translator.h"
#include <iostream>

using namespace std;

translator::translator(short int input) : ID(input) {};
translator::~translator() {};

void translator::set_language(LanguageExpertise* input) {
	lng = input;
};

void translator::translate() {
	lng->speak();
};