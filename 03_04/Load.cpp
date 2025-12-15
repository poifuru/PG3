#include "Load.h"
#include <iostream>

Load::Load() {
	name_ = "ヴォルデモート";
	printf("%s卿があらわれた\n", name_);
}

Load::~Load() {
	printf("%s卿をたおした\n", name_);
}

void Load::Attack() {
	printf("%s「お辞儀を　するのだ！」のキス！\n", name_);
}