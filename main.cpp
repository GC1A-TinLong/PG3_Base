#include <stdio.h>
#include <string>
#include <iostream>
#include <chrono>

using namespace std;

int main() {

	std::string a(100000, 'a');

	std::chrono::high_resolution_clock::time_point  start, end;

	start = std::chrono::high_resolution_clock::now(); // 計測開始時間
	// 処理
	std::string b = a;
	end = std::chrono::high_resolution_clock::now();  // 計測終了時間
	cout << "コビー：" << chrono::duration_cast<chrono::microseconds>(end - start).count() << "μs" << endl;

	start = std::chrono::high_resolution_clock::now(); // 計測開始時間
	// 処理
	b = std::move(a);
	end = std::chrono::high_resolution_clock::now();  // 計測終了時間
	cout << "移動：" << chrono::duration_cast<chrono::microseconds>(end - start).count() << "μs" << endl;

	return 0;
}