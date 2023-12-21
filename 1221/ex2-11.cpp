#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[30], addr[100];
	int age;
	cout << "이름은? ";
	cin.getline(name, 30, '\n');
	cout << "주소는?";
	cin.getline(addr, 100, '\n');
	cout << "나이는? ";
	cin >> age;
	cout << name << ", " << addr << ", " << age;
}