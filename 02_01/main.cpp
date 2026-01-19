#include <stdio.h>

// テンプレート関数
template <typename type>
type Min(type num1, type num2) {
	// num1が小さければnum1を、そうでなければ（同じ場合も含む）num2を返す
	if (num1 < num2) {
		return num1;
	}
	else {
		return num2;
	}
}

int main() {
	
	printf("%d\n", Min<int>(300, 200));
	printf("%2.2f\n", Min<float>(3.0f, 20.0f));
	printf("%f\n", Min<double>(3.856987987f, 2.982987f));

	return 0;
}