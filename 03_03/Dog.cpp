#include "Dog.h"
#include <iostream>

Dog::Dog() {
	name_ = "イッヌ";
	printf("%sがあらわれた\n", name_);
}

Dog::~Dog() {
	printf("%sが死んでしまった\n", name_);
}

void Dog::Cry() {
	printf("%s「ワンワン^O^」\n", name_);
}
