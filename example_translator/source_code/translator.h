// translator.h
//

#pragma once

#include "LanguageExpertise.h"
#include <cstddef>

class translator{
private:
	short int ID;
	/* add more attributes */

	LanguageExpertise* lng = NULL;
	/* basic attribute for Strategy */

public:
	translator(short int);
	/* Constructor */

	~translator();
	/* Destructor */

	void set_language(LanguageExpertise*);
	/* basic method for Strategy */

	void translate();

	/* *************** *
	* add more methods *
	* *************** */
};

