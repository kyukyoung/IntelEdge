#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int cnt = 0;
	char arr[100];
	cout << "���ڵ��� �Է��϶�(100�� �̸�)\n";
	cin.getline(arr, 100, '\n');
	for (int i = 0; i<100; i++) {
		if (strcmp(arr, "\n") == 0) break;
		if (arr[i] == 'x') cnt++;
	}
	cout << "x�� ������ " << cnt;
	return 0;
}