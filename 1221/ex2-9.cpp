#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char arr[30];
	while (true) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>> ";
		cin.getline(arr, 30, '\n');
		if (strcmp(arr, "yes") == 0) {
			cout << "�����մϴ�~\n";
			break;
		}
	}
	return 0;
}