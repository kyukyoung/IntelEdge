#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���." << endl;
	
	// �Է� �ޱ�
	string s;
	cout << "�ι̿�>>";
	cin >> s;

	string t;
	cout << "�ٸ���>>";
	cin >> t;

	// Ʋ�� �Է� ��󳻱�
	if(s != "����" && s != "����" && s != "��") {
		cout << "�ι̿��� �Է��� Ʋ�Ƚ��ϴ�." << endl;
		return 0;
	}
	if(t != "����" && t != "����" && t != "��") {
		cout << "�ٸ����� �Է��� Ʋ�Ƚ��ϴ�." << endl;
		return 0;
	}

	// ���� ����
	if(s == "����" && t == "��")
		cout << "�ι̿��� �̰���ϴ�." << endl;
	else if(s == "����" && t == "����")
		cout << "�ٸ����� �̰���ϴ�." << endl;
	else if(s == "����" && t == "����")
		cout << "�ι̿��� �̰���ϴ�." << endl;
	else if(s == "����" && t == "��")
		cout << "�ٸ����� �̰���ϴ�." << endl;
	else if(s == "��" && t == "����")
		cout << "�ι̿��� �̰���ϴ�." << endl;
	else if(s == "��" && t == "����")
		cout << "�ٸ����� �̰���ϴ�." << endl;
	else 
		cout << "�����ϴ�." << endl;
}