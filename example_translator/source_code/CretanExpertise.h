// CretanExpertise.h
//

#pragma once

#include "LanguageExpertise.h"
#include <iostream>

using namespace std;

class CretanExpertise : public LanguageExpertise {
public:
	inline void speak() {
		cout << "Inta bre ginete?" << endl;
	};
};