#include <iostream>
using namespace std;

int main() {
	float max = 0, arr[6];
	cout << "5개의 실수를 입력하라>> ";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (max < arr[i]) max = arr[i];
	}
	cout << "제일 큰 수 = " << max;
}