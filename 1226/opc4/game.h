#pragma once
#ifndef GAME.H

#include <iostream>
#include <cstring>
using namespace std;

class WordGame
{//끝말잇기 게임 전체를 운영하는 클래스
public:
	WordGame();
	~WordGame();
	int compareWord(string str);
private:
	string str1, str2;
};


class Player
{//선수를 표현하는 클래스
public:
	Player();
	~Player();
	void addPlayer();
	string name;
private:
	
};
#endif // GAME.H