#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[30], addr[100];
	int age;
	cout << "�̸���? ";
	cin.getline(name, 30, '\n');
	cout << "�ּҴ�?";
	cin.getline(addr, 100, '\n');
	cout << "���̴�? ";
	cin >> age;
	cout << name << ", " << addr << ", " << age;
}