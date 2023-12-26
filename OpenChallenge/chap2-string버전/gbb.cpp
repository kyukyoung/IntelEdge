#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << endl;
	
	// 입력 받기
	string s;
	cout << "로미오>>";
	cin >> s;

	string t;
	cout << "줄리엣>>";
	cin >> t;

	// 틀린 입력 골라내기
	if(s != "가위" && s != "바위" && s != "보") {
		cout << "로미오의 입력이 틀렸습니다." << endl;
		return 0;
	}
	if(t != "가위" && t != "바위" && t != "보") {
		cout << "줄리엣의 입력이 틀렸습니다." << endl;
		return 0;
	}

	// 승자 결정
	if(s == "가위" && t == "보")
		cout << "로미오가 이겼습니다." << endl;
	else if(s == "가위" && t == "바위")
		cout << "줄리엣이 이겼습니다." << endl;
	else if(s == "바위" && t == "가위")
		cout << "로미오가 이겼습니다." << endl;
	else if(s == "바위" && t == "보")
		cout << "줄리엣이 이겼습니다." << endl;
	else if(s == "보" && t == "바위")
		cout << "로미오가 이겼습니다." << endl;
	else if(s == "보" && t == "가위")
		cout << "줄리엣이 이겼습니다." << endl;
	else 
		cout << "비겼습니다." << endl;
}