#include <iostream>
using namespace std;

class Circle {
	int radius; // 원의 반지름 값
public:
	void setRadius(int radius); // 반지름을 설정한다.
	double getArea(); // 면적을 리턴한다.
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle *p;
	int size;
	cout << "원의 개수 >> ";
	cin >> size; // 원의 개수 입력
	if(size < 1)
		return 0;

	p = new Circle[size]; // 객체 배열 동적 생성
	int radius;
	for(int i=0; i<size; i++) {
		cout << "원 " << i+1 << "의 반지름 >> ";
		cin >> radius;
		p[i].setRadius(radius);
	}
	int count = 0;
	for(int i=0; i<size; i++) {
		if(p[i].getArea() > 100) {
			count++; 
		}
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;
	delete [] p; // 객체 배열 소멸
}

