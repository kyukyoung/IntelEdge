#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[10], num1[10], num2[10];
	while (1) {
		cout << "���� �� �Է�>> ";
		cin >> num1 >> str >> num2;
		int res1 = atoi(num1); //���ڿ��� ������
		int res3 = atoi(num2); 
		if (strcmp(str, "+") == 0) cout << num1 << str << num2 << " = " << res1 + res3 << endl;
		else if (strcmp(str, "-") == 0) cout << num1 << str << num2 << " = " << res1 - res3 << endl;
		else if (strcmp(str, "*") == 0) cout << num1 << str << num2 << " = " << res1 * res3 << endl;
		else if (strcmp(str, "/") == 0) cout << num1 << str << num2 << " = " << res1 / res3 << endl;
		else if (strcmp(str, "%") == 0) cout << num1 << str << num2 << " = " << res1 % res3 << endl;
		else cout << "�����ڸ� �� �� �Է��ϼ̽��ϴ�." << endl;
	}
	return 0;	
}