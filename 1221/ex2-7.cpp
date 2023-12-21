#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int cnt = 0;
	char arr[100];
	cout << "문자들을 입력하라(100개 미만)\n";
	cin.getline(arr, 100, '\n');
	for (int i = 0; i<100; i++) {
		if (strcmp(arr, "\n") == 0) break;
		if (arr[i] == 'x') cnt++;
	}
	cout << "x의 개수는 " << cnt;
	return 0;
}