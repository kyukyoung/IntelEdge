#include <iostream>
#include <cstring>
#include "game.h"
using namespace std;

int main() {//WordGame ��ü�� �����ϰ� ������ �����ϴ� �Լ�
	
	cout << "���� �ձ� ������ �����մϴ�" << endl;
	cout << "���ӿ� �����ϴ� �ο��� �� �� �Դϱ�? ";
	int n;
	cin >> n;
	Player* pName = new Player[n];
	if (!pName) {//�� ���� ���� �޸� �����Ҵ� �Ұ��� ��
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�." << endl;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "�������� �̸��� �Է��ϼ���.(��ĭ ����) >> ";
		pName[i].addPlayer();
	}
	cout << "�����ϴ� �ܾ�� �ƹ����Դϴ�" << endl;
	int res, i=0;
	string str;
	WordGame* pGame = new WordGame;
	while (true) {
		cout << pName[i].name << ">> ";
		cin >> str;
		res = pGame->compareWord(str);
		if (res) {
			cout << "���� �ձ� ����!" << endl;
			break;
		}
		i++;
		if (i == n) i = 0;
	}
	delete[]pName;
	return 0;
}