#include <iostream>
using namespace std;

int main() {
	float max = 0, arr[6];
	cout << "5���� �Ǽ��� �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (max < arr[i]) max = arr[i];
	}
	cout << "���� ū �� = " << max;
}