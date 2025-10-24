#include <stdio.h>

// 比較して出力する関数
void Comparation(int num, int num2) {
	int i = 1; // 労働時間
	int total = 0;	//通常時給のトータル
	int recTotal = 0;

	printf("--- 給料比較---\n");

	while(recTotal <= total) {

		//トータル給料を計算するやんす
		total = num * i;
		//結果を出力する
		printf("労働時間 %d時間:\n", i);

		printf("一般給の時給: %d円, トータル: %d円\n", num, total);

		num2 = num2 * 2 - 50;
		recTotal += num2;
		printf("再帰的な時給: %d円, トータル: %d円\n\n", num2, recTotal);

		i++;
	}
}

int main() {
	// 一般給料
	int normalSalary = 1226;
	// 再帰関数の給料の初期値
	int recursionSalary = 100;

	Comparation(normalSalary, recursionSalary);
	
	return 0;
}