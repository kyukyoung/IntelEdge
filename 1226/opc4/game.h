#pragma once
#ifndef GAME.H

#include <iostream>
#include <cstring>
using namespace std;

class WordGame
{//�����ձ� ���� ��ü�� ��ϴ� Ŭ����
public:
	WordGame();
	~WordGame();
	int compareWord(string str);
private:
	string str1, str2;
};


class Player
{//������ ǥ���ϴ� Ŭ����
public:
	Player();
	~Player();
	void addPlayer();
	string name;
private:
	
};
#endif // GAME.H