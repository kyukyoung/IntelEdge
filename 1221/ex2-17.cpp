#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[10], num1[10], num2[10];
	while (1) {
		cout << "연산 식 입력>> ";
		cin >> num1 >> str >> num2;
		int res1 = atoi(num1); //문자열을 정수로
		int res3 = atoi(num2); 
		if (strcmp(str, "+") == 0) cout << num1 << str << num2 << " = " << res1 + res3 << endl;
		else if (strcmp(str, "-") == 0) cout << num1 << str << num2 << " = " << res1 - res3 << endl;
		else if (strcmp(str, "*") == 0) cout << num1 << str << num2 << " = " << res1 * res3 << endl;
		else if (strcmp(str, "/") == 0) cout << num1 << str << num2 << " = " << res1 / res3 << endl;
		else if (strcmp(str, "%") == 0) cout << num1 << str << num2 << " = " << res1 % res3 << endl;
		else cout << "연산자를 잘 못 입력하셨습니다." << endl;
	}
	return 0;	
}