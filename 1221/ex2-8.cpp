#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char pwd1[10], pwd2[10];
	cout << "�� ��ȣ�� �Է��ϼ���>> ";
	cin >> pwd1;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>> ";
	cin >> pwd2;
	if (strcmp(pwd1, pwd2) == 0) cout << "�����ϴ�.\n";
	else cout << "���� �ʽ��ϴ�.\n";
	return 0;
}