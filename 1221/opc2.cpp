#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요.\n로미오>> ";
	string s;
	cin >> s;
	cout << "줄리엣>> ";
	string t;
	cin >> t;
	if ((s == "가위" && t == "보") || (s == "바위" && t == "가위") || (s == "보" && t == "바위"))
		cout << "로미오가 이겼습니다." << endl;
	else if ((s == "가위" && t == "바위") || (s == "바위" && t == "보") || (s == "보" && t == "가위"))
		cout << "줄리엣이 이겼습니다." << endl;
}