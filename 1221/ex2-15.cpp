#include <iostream>
using namespace std;

int main() {
	int i, j;
	cout << "***** 승리장에 오신 것을 환영합니다. *****\n짬뽕:1, 짜장:2, 군만두:3, 종료:4>> ";
	cin >> i;
	if (i > 0 && i < 4) {
		cout << "몇 인분? ";
		cin >> j;
	}	
	switch(i) {
	case 1: cout << "짬뽕 " << j << "인분 나왔습니다.\n"; break;
	case 2: cout << "짜장 " << j << "인분 나왔습니다.\n"; break;
	case 3: cout << "군만두 " << j << "인분 나왔습니다.\n"; break;
	case 4: cout << "오늘 영업은 끝났습니다.\n"; break;
	default: cout << "다시 주문하세요~!\n";
	}
	return 0;
}