#include "Cat.h"
#include <iostream>

Cat::Cat() {
	name_ = "ネッコ";
	printf("%sがあらわれた\n", name_);
}

Cat::~Cat() {
	printf("%sが死んでしまった\n", name_);
}

void Cat::Cry() {
	printf("%s「ニャーニャー^O^」\n", name_);
}