#include <iostream>
#include <cstring>
#include <cctype> //문자의 속성을 확인하고 변환하는 함수 제공. isalpha, tolower...
using namespace std;
const int ALPHABET_SIZE = 26; //알파벳 26개

int main() {
	char text[10000];					//문장 저장
	int count[ALPHABET_SIZE] = { 0 };	//각 알파벳의 개수 저장
	int countTotal = 0;
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	cin.getline(text, sizeof(text), ';');
	
	for (int i = 0; i < strlen(text); i++) {
		char c = tolower(text[i]);		//대문자를 소문자로
		if (isalpha(c)) {//알파벳인지 검사. 알파벳인 경우에만 개수 증가
			count[c - 'a']++;
		}
	}
	for (int i = 0; i < ALPHABET_SIZE; i++) {
		countTotal += count[i];
	}
	cout << "\n\n총 알파벳 수 " << countTotal << endl << endl;
	cout << "알파벳 별 개수 결과:" << endl;
	for (int i = 0; i < ALPHABET_SIZE; i++) {//알파벳 별 개수 출력
		//if (count[i] > 0) 
			cout << static_cast<char>('a' + i) << "(" << count[i] <<")\t: ";
			for (int j = 0; j < count[i]; j++) cout << "*";
			cout << endl;
	}
	return 0;	
}