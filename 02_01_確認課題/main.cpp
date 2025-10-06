#include <stdio.h>
template <typename type>

type Min(type num1, type num2) {
	if(num1 < num2) {
		return num1;
	}
	else if(num2 < num1) {
		return num2;
	}
}

int main() {
	
	printf("%d\n", Min<int>(300, 200));
	printf("%2.2f\n", Min<float>(3.0f, 20.0f));
	printf("%f\n", Min<double>(3.856987987f, 2.982987f));

	return 0;
}