#include <iostream>
using namespace std;

int main() {
	char c[100]; // 한 라인에 100개의 문자면 충분하다.
	int count = 0;
	cout << "문자들을 입력하라(100개 미만)." << endl;
	cin.getline(c, 100, '\n'); // <Enter> 키가 입력될 때까지 문자 읽기

	int i = 0;
	while(true) {
		if(c[i] == '\0') break; // 라인 끝에 '\0'이 있음
		if(c[i] == 'x') count++;
		i++;
	}
	cout << 'x' << "의 개수는 " << count << endl;
}