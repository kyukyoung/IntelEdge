#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���.\n�ι̿�>> ";
	string s;
	cin >> s;
	cout << "�ٸ���>> ";
	string t;
	cin >> t;
	if ((s == "����" && t == "��") || (s == "����" && t == "����") || (s == "��" && t == "����"))
		cout << "�ι̿��� �̰���ϴ�." << endl;
	else if ((s == "����" && t == "����") || (s == "����" && t == "��") || (s == "��" && t == "����"))
		cout << "�ٸ����� �̰���ϴ�." << endl;
}