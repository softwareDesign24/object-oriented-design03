// main.cpp
// 

#include <iostream>
#include "translator.h"
#include "LanguageExpertise.h"
#include "CretanExpertise.h"
#include "CypriotExpertise.h"
#include "IonianExpertise.h"

using namespace std;

int main() {

	// construct 3 translators
	translator Mitsos(1);
	translator Kate(2);
	translator Vaggos(3);

	
	// construct 3 language expertise
	CretanExpertise cretan;
	CypriotExpertise cypriot;
	IonianExpertise ionian;

	
	// define translators' expertise
	Mitsos.set_language(&cretan);
	Kate.set_language(&cypriot);
	Vaggos.set_language(&ionian);

	// time for translations
	Mitsos.translate();
	Kate.translate();
	Vaggos.translate();

	// ... and now it's time for some real strategy!
	Vaggos.set_language(&cretan);
	Vaggos.translate();

	

	return 0;
}