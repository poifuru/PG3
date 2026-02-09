#include "Min.h"
#include <memory>

int main() {
	std::unique_ptr<MinCalculator<int, int>> min1 = std::make_unique<MinCalculator<int, int>>(1, 22);
	printf("%f\n", static_cast<float>(min1->Min()));

	std::unique_ptr<MinCalculator<float, float>> min2 = std::make_unique<MinCalculator<float, float>>(1.2f, 1.5f);
	printf("%f\n", static_cast<float>(min2->Min()));

	std::unique_ptr<MinCalculator<double, double>> min3 = std::make_unique<MinCalculator<double, double>>(1.8, 1.5);
	printf("%f\n", static_cast<float>(min3->Min()));

	std::unique_ptr<MinCalculator<int, float>> min4 = std::make_unique<MinCalculator<int, float>>(1, 1.5f);
	printf("%f\n", static_cast<float>(min4->Min()));

	std::unique_ptr<MinCalculator<float, double>> min5 = std::make_unique<MinCalculator<float, double>>(2.0f, 1.5);
	printf("%f\n", static_cast<float>(min5->Min()));

	std::unique_ptr<MinCalculator<double, int>> min6 = std::make_unique<MinCalculator<double, int>>(0.3, 1.5f);
	printf("%f\n", static_cast<float>(min6->Min()));
}