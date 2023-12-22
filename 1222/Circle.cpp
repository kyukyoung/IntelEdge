#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle() {//기본생성자
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}
Circle::Circle(int r) {//생성자
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}
Circle::~Circle() {//소멸자
	cout << "반지름 " << radius << " 원 소멸" << endl;
}
double Circle::getArea() {
	return 3.14*radius*radius;
}