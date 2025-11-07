#include <stdio.h>
#include <Windows.h>
#include <random>
#include <functional>

void ShowResult(int roll, int userGuess);

void DelayReveal(std::function<void(int, int)> fn, unsigned int delayMs, int roll, int userGuess);

int main(int argc, const char* argv[]) {
	//乱数の初期化
	srand((unsigned)time(NULL));
	int userGuess = 0;

	//選択
	printf("半か丁か選んでください\n");
	scanf_s("%d", &userGuess);

	//出目の生成
	int roll = rand() % 6 + 1;

	std::function<void(int, int)> function = [](int roll, int userGuess) {
		printf("出目は%dでした\n", roll);
		int judge = roll % 2;
		if(judge == 0 && userGuess == 0 || judge == 1 && userGuess == 1) {
			printf("正解\n");
		}
		else {
			printf("不正解\n");
		}
	};

	//判定
	DelayReveal(function, 3000, roll, userGuess);
	
	return 0;
}

void DelayReveal(std::function<void(int, int)> fn, unsigned int delayMs, int roll, int userGuess) {
	Sleep(delayMs);
	fn(roll, userGuess);
}