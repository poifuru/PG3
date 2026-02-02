#include <thread>
#include <stdio.h>

void PrintThread(int num);

int main() {
	std::thread th1(PrintThread, 1);
	th1.join();

	std::thread th2(PrintThread, 2);
	th2.join();

	std::thread th3(PrintThread, 3);
	th3.join();

	return 0;
}

void PrintThread(int num) {
	printf("thread %d\n", num);
}