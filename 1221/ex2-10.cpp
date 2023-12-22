#include <iostream>		//����� �Լ� ���
//#include <cstring>	//strcmp() ���
#include <string>       //string getline() ���
using namespace std;	//std:: ���������� namespace����

int main() {
    const int numNames = 5;
    string names[numNames];
    string longestName;
    int maxLength = 0;

    cout << "5���� �̸��� ';'�� �����Ͽ� �Է����ּ���:\n>> ";
    for (int i = 0; i < numNames; i++) {
        getline(cin, names[i], ';');
        cout << "�̸�: " << names[i] << endl;
        if (names[i].length() > maxLength) {
            maxLength = names[i].length();
            longestName = names[i];
        }
    }
    cout << "���� �� �̸�: " << longestName << endl;
    return 0;
}