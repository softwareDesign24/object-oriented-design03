// CypriotExpertise.h
//

#pragma once

#include "LanguageExpertise.h"
#include <iostream>

using namespace std;

class CypriotExpertise : public LanguageExpertise {
public:
	inline void speak() {
		cout << "Ti kamnis?" << endl;

	}
};