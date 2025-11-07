#include <stdio.h>
#include <Windows.h>
#include <random>

int main() {
	unsigned int currentTime = time(nullptr);
	srand(currentTime);

	return 0;
}