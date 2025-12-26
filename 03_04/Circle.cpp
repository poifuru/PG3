#include "Circle.h"
#include <iostream>
#include <numbers>

Circle::Circle() {
	radius_ = 5.0f;
	size_ = 0.0f;
}

Circle::~Circle() {
	
}

void Circle::Size() {
	size_ = std::numbers::pi_v<float> * std::powf(radius_, 2);
}

void Circle::Draw() {
	printf("Circleサイズ : %f\n", size_);
}