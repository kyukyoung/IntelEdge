#include "game.h"
#include <cstring>
using namespace std;

WordGame::WordGame()
{
	str1 = "�ƹ���";
}
WordGame::~WordGame()
{
}
int WordGame::compareWord(string str)
{
	str2 = str;
	if (str1.at(str1.length()-1-1) == str2.at(0) && str1.at(str1.length()-1) == str2.at(1)) {
		//�����ձ� ����
		str1 = str2;
		return 0;
	}
	else {
		//�����ձ� ����
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
