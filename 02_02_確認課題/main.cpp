#include <stdio.h>

int SalaryComparison(int recursionsalary, const int salary, int hourCount) {
	recursionsalary = recursionsalary * 2 - 50;

	//salaryより大きくなったら再帰を終わらせる
	if(recursionsalary > salary) {
		return hourCount;
	}

	hourCount++;
	return SalaryComparison(recursionsalary, salary, hourCount);
}

int main() {
	//一般給料
	const int salary = 1226;
	int recursionsalary = 100;
	int hourCount = 1;

	printf("%d", SalaryComparison(recursionsalary, salary, hourCount));

	return 0;
}