#include <iostream>
using namespace std;

int main() {
	int i, j;
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n«��:1, ¥��:2, ������:3, ����:4>> ";
	cin >> i;
	if (i > 0 && i < 4) {
		cout << "�� �κ�? ";
		cin >> j;
	}	
	switch(i) {
	case 1: cout << "«�� " << j << "�κ� ���Խ��ϴ�.\n"; break;
	case 2: cout << "¥�� " << j << "�κ� ���Խ��ϴ�.\n"; break;
	case 3: cout << "������ " << j << "�κ� ���Խ��ϴ�.\n"; break;
	case 4: cout << "���� ������ �������ϴ�.\n"; break;
	default: cout << "�ٽ� �ֹ��ϼ���~!\n";
	}
	return 0;
}