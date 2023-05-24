// IonianExpertise.h
//

#pragma once

#include "LanguageExpertise.h"
#include <iostream>

using namespace std;

class IonianExpertise : public LanguageExpertise {
public:
	inline void speak() {
		cout << "'bre!" << endl;
	}
};