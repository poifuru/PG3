#include <stdio.h>

//再帰関数
int Recursion(int num) {
	int newNum = 0;
	newNum = num * 2 - 50;
	if(newNum >= 999999) {
		return newNum;
	}

	return Recursion(newNum);
}

//比較して出力する関数
void Comparation(int num, int num2) {
	int i = 1;
	printf("給料比較\n");
	while(num * i > Recursion(num2) * i) {
		printf("労働時間 %d時間  一般給料 : 時給%d円  トータル%d円\n", i, num, num * i);
		printf("労働時間 %d時間  再帰給料 : 時給%d円  トータル%d円\n\n", i, Recursion(num2), Recursion(num2) * i);
		i++;
	}
}

int main() {
	//一般給料
	const int salary = 1226;
	//再帰関数の給料
	int recursionSalary = 100;

	Comparation(salary, recursionSalary);

	return 0;
}