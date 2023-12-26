#include <iostream>
#include <cstring>
#include "game.h"
using namespace std;

int main() {//WordGame 객체를 생성하고 게임을 시작하는 함수
	
	cout << "끝말 잇기 게임을 시작합니다" << endl;
	cout << "게임에 참가하는 인원은 몇 명 입니까? ";
	int n;
	cin >> n;
	Player* pName = new Player[n];
	if (!pName) {//힙 가득 차서 메모리 동작할당 불가할 때
		cout << "메모리를 할당할 수 없습니다." << endl;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "참가자의 이름을 입력하세요.(빈칸 없이) >> ";
		pName[i].addPlayer();
	}
	cout << "시작하는 단어는 아버지입니다" << endl;
	int res, i=0;
	string str;
	WordGame* pGame = new WordGame;
	while (true) {
		cout << pName[i].name << ">> ";
		cin >> str;
		res = pGame->compareWord(str);
		if (res) {
			cout << "끝말 잇기 실패!" << endl;
			break;
		}
		i++;
		if (i == n) i = 0;
	}
	delete[]pGame;
	delete[]pName;
	return 0;
}
