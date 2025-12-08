#include "Min.h"
#include <memory>

int main() {
	std::unique_ptr<Min<int, int>>min1 = std::make_unique<Min<int, int>>(1, 22);
	min1->Comparison();
	std::unique_ptr<Min<float, float>>min2 = std::make_unique<Min<float, float>>(1.2f, 1.5f);
	min2->Comparison();
	std::unique_ptr<Min<double, double>>min3 = std::make_unique<Min<double, double>>(1.8, 1.5);
	min3->Comparison();
	std::unique_ptr<Min<int, float>>min4 = std::make_unique<Min<int, float>>(1, 1.5f);
	min4->Comparison();
	std::unique_ptr<Min<float, double>>min5 = std::make_unique<Min<float, double>>(2.0f, 1.5);
	min5->Comparison();
	std::unique_ptr<Min<double, int>>min6 = std::make_unique<Min<double, int>>(0.3, 1.5f);
	min6->Comparison();
}