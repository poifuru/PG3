#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
	std::ifstream file("ASCII.txt");
	std::string line;
	std::vector<std::string> ids;

	//テキストファイルのカンマごとに区切って処理する
	while(std::getline(file, line, ',')) {

		//＠が見つかったインデックスを記録しておく
		size_t at = line.find("@");
		//atがsize_t型の最大値で無かったら
		if(at != std::string::npos) {
			//区切った文章の一文字目から＠の一文字前までをidsに格納
			ids.push_back(line.substr(0, at));
		}
	}

	//全部格納し終わったらidの小さい順にソート
	std::sort(ids.begin(), ids.end());

	//出力
	for(const auto& id : ids) {
		std::cout << id + "@g.neec.ac.jp" << std::endl;
	}

	return 0;
}