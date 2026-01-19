#include <stdlib.h>
#include <iostream>
#include <list>
#include <cstring>

int main() {
	std::list<const char*> yamanoteLine{
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimachi",
		"Ueno",
		"Uguisudani",
		"Nippori",
		"Tabata",
		"Komagome",
		"Sugamo",
		"Otsuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"Shin-Okubo",
		"Shinjuku",
		"Yoyogi",
		"Harajuku",
		"Shibuya",
		"Ebisu",
		"Meguro",
		"Gotanda",
		"Osaki",
		"Shinagawa",
		"Tamachi",
		"HamamatsuCho",
		"Shimbasi",
		"Yurakucho",
	};

	std::list<const char*>::iterator itr;

	printf("Since1970\n");
	for (auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); itr++) {
		std::cout << *itr << "\n";
	}

	//リストに入っている文字列をすべて出力
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (strcmp(*itr, "Tabata") == 0) {
			itr = yamanoteLine.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	printf("\nSince2019\n");
	for (auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); itr++) {
		std::cout << *itr << "\n";
	}

	//リストに入っている文字列をすべて出力
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (strcmp(*itr, "Tamachi") == 0) {
			itr = yamanoteLine.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}

	printf("\nSince2022\n");
	for (auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); itr++) {
		std::cout << *itr << "\n";
	}

	return 0;
}