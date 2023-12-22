#include <iostream>
#include <cstring>
#include <cctype> //������ �Ӽ��� Ȯ���ϰ� ��ȯ�ϴ� �Լ� ����. isalpha, tolower...
using namespace std;
const int ALPHABET_SIZE = 26; //���ĺ� 26��

int main() {
	char text[10000];					//���� ����
	int count[ALPHABET_SIZE] = { 0 };	//�� ���ĺ��� ���� ����
	int countTotal = 0;
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	cin.getline(text, sizeof(text), ';');
	
	for (int i = 0; i < strlen(text); i++) {
		char c = tolower(text[i]);		//�빮�ڸ� �ҹ��ڷ�
		if (isalpha(c)) {//���ĺ����� �˻�. ���ĺ��� ��쿡�� ���� ����
			count[c - 'a']++;
		}
	}
	for (int i = 0; i < ALPHABET_SIZE; i++) {
		countTotal += count[i];
	}
	cout << "\n\n�� ���ĺ� �� " << countTotal << endl << endl;
	cout << "���ĺ� �� ���� ���:" << endl;
	for (int i = 0; i < ALPHABET_SIZE; i++) {//���ĺ� �� ���� ���
		//if (count[i] > 0) 
			cout << static_cast<char>('a' + i) << "(" << count[i] <<")\t: ";
			for (int j = 0; j < count[i]; j++) cout << "*";
			cout << endl;
	}
	return 0;	
}