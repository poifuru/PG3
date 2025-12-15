#include "Dementor.h"
#include <iostream>

Dementor::Dementor() {
	name_ = "ディメンター";
	printf("%sがあらわれた\n", name_);
}

Dementor::~Dementor() {
	printf("%sをたおした\n", name_);
}

void Dementor::Attack() {
	printf("%sの吸血鬼のキス！\n", name_);
}
