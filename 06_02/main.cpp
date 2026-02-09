#include <stdio.h>
#include <thread>
#include <queue>
#include <condition_variable>
#include <mutex>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

//CSVファイルを読み込んで2次元ベクターで返す関数
std::vector<std::vector<std::string>> readCSV(std::string filename) {
	std::ifstream file(filename);
	std::vector<std::vector<std::string>> data;
	std::string line;

	// ファイルが正常に開けたか確認
	if (!file.is_open()) {
		std::cerr << "ファイルが開けなかった" << filename << std::endl;
		return data;
	}

	// 行単位で読み込み
	while (std::getline(file, line)) {
		std::vector<std::string> row;
		std::stringstream ss(line);
		std::string cell;

		// カンマ区切りで分割
		while (std::getline(ss, cell, ',')) {
			row.push_back(cell);
		}

		// 行をデータに追加
		data.push_back(row);
	}

	file.close();
	return data;
}

//読み込んだCSVファイルをマップチップ形式で描画する関数
void PrintMapchip(std::vector<std::vector<std::string>> csvData) {
	for (size_t i = 0; i < csvData.size(); ++i) {
		for (size_t j = 0; j < csvData[i].size(); ++j) {
			std::cout << csvData[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int main() {
	std::vector<std::vector<std::string>> csvData;
	std::mutex mutex;
	std::condition_variable condition;
	bool isLoaded = false;
	std::string filename = "mapData.csv";

	//スレッド1(マップ読み込み)
	std::thread th1([&]() {
		std::ifstream file(filename);
		std::vector<std::vector<std::string>> tempGrid;
		std::string line;

		if (file.is_open()) {
			while (std::getline(file, line)) {
				std::vector<std::string> row;
				std::stringstream ss(line);
				std::string cell;
				while (std::getline(ss, cell, ',')) {
					row.push_back(cell);
				}
				tempGrid.push_back(row);

				// 読み込み感を出したいのでちょっと待機
				std::this_thread::sleep_for(std::chrono::milliseconds(100));
			}
		}

		// データをメイン側に渡す
		{
			std::lock_guard<std::mutex> lock(mutex);
			csvData = tempGrid;
			isLoaded = true;
		}
		//待機中のスレッドを一つ起こす
		condition.notify_one();
	});

	{
		std::unique_lock<std::mutex> lock(mutex);
		condition.wait(lock, [&] {return isLoaded; });
	}

	//ここに来るときには読み込みは確実に終わってる
	std::cout << "\n読み込み完了\n" << std::endl;
	for (size_t i = 0; i < csvData.size(); ++i) {
		for (size_t j = 0; j < csvData[i].size(); ++j) {
			std::cout << csvData[i][j] << " ";
		}
		std::cout << std::endl;
	}

	th1.join();

	return 0;
}