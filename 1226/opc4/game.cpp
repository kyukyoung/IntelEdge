#include "game.h"
#include <cstring>
using namespace std;

WordGame::WordGame()
{
	str1 = "아버지";
}
WordGame::~WordGame()
{
}
int WordGame::compareWord(string str)
{
	str2 = str;
	if (str1.at(str1.length()-1-1) == str2.at(0) && str1.at(str1.length()-1) == str2.at(1)) {
		//끝말잇기 성공
		str1 = str2;
		return 0;
	}
	else {
		//끝말잇기 실패
		return 1;
	}
}

Player::Player()
{
}
Player::~Player()
{
}
void Player::addPlayer()
{
	cin >> name;
}
