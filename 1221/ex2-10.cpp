#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[100];
	char Nbuf[5][100];
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요.\n>> ";
	cin.getline(name, 100, ';');
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 100; j++){
			if (strcmp(name, ";") == 0) {
				cout << i + 1 << " : " << Nbuf[i] << "\n";
				break;
			}
			else Nbuf[i][j] = name[j];
		}
	}
}