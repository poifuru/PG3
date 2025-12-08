#pragma once
#include <stdio.h>

template <typename T1, typename T2>
class Min {
public:
	T1 num1_;
	T2 num2_;

	Min(T1 num1, T2 num2) {
		num1_ = num1;
		num2_ = num2;
	};

	void Comparison() {
		if(num1_ < num2_) {
			printf("%f\n", static_cast<float>(num1_));
		}
		else {
			printf("%f\n", static_cast<float>(num2_));
		}
	};
};