#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char pwd1[10], pwd2[10];
	cout << "새 암호를 입력하세요>> ";
	cin >> pwd1;
	cout << "새 암호를 다시 한 번 입력하세요>> ";
	cin >> pwd2;
	if (strcmp(pwd1, pwd2) == 0) cout << "같습니다.\n";
	else cout << "같지 않습니다.\n";
	return 0;
}