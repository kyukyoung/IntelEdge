#include <iostream>
using namespace std;

int main() {
	int n1, n2, max;
	cout << "�� ���� �Է��϶�>> ";
	cin >> n1 >> n2;
	(n1 > n2) ? (max = n1) : (max = n2);
	cout << "ū �� = " << max;
	return 0;
}