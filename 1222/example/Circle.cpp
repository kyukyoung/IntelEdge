#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle() {//�⺻������
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}
Circle::Circle(int r) {//������
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}
Circle::~Circle() {//�Ҹ���
	cout << "������ " << radius << " �� �Ҹ�" << endl;
}
double Circle::getArea() {
	return 3.14*radius*radius;
}