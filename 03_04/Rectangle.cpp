#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() {
	height_ = 5.0f;
	width_ = 7.0f;
	size_ = 0.0f;
}

Rectangle::~Rectangle() {
	
}

void Rectangle::Size() {
	size_ = height_ * width_;
}

void Rectangle::Draw() {
	printf("Rectangleサイズ : %f\n", size_);
}