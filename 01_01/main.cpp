#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <list>
using namespace std;

int main() {
	list<const char*> yamanoteLine{
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

	list<const char*>::iterator itr;

	printf("Since1970\n");
	for(auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); itr++) {
		cout << *itr << "\n";
	}

	//リストに入っている文字列をすべて出力
	for(list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if(*itr == "Tabata") {
			itr = yamanoteLine.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	printf("\nSince2019\n");
	for(auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); itr++) {
		cout << *itr << "\n";
	}

	//リストに入っている文字列をすべて出力
	for(list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if(*itr == "Tamachi") {
			itr = yamanoteLine.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}

	printf("\nSince2022\n");
	for(auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); itr++) {
		cout << *itr << "\n";
	}

	return 0;
}