#pragma once
#include <stdio.h>

template <typename T1, typename T2>
class MinCalculator {
public:
	T1 num1_;
	T2 num2_;

	MinCalculator(T1 num1, T2 num2) {
		num1_ = num1;
		num2_ = num2;
	}

	// 戻り値の型は、より精度の高い方や計算結果に合うよう auto（あるいは適切な型）にすると柔軟
	auto Min() {
		if (num1_ < num2_) {
			return static_cast<double>(num1_);
		}
		else {
			return static_cast<double>(num2_);
		}
	}
};