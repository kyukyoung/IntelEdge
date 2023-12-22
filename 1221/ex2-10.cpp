#include <iostream>		//입출력 함수 사용
//#include <cstring>	//strcmp() 사용
#include <string>       //string getline() 사용
using namespace std;	//std:: 안적으려고 namespace선언

int main() {
    const int numNames = 5;
    string names[numNames];
    string longestName;
    int maxLength = 0;

    cout << "5명의 이름을 ';'로 구분하여 입력해주세요:\n>> ";
    for (int i = 0; i < numNames; i++) {
        getline(cin, names[i], ';');
        cout << "이름: " << names[i] << endl;
        if (names[i].length() > maxLength) {
            maxLength = names[i].length();
            longestName = names[i];
        }
    }
    cout << "가장 긴 이름: " << longestName << endl;
    return 0;
}