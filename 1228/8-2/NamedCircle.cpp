#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius=0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; };
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius, string name);
	void set(int radius, string name){
		setRadius(radius);
		this->name = name;
	}
	string getName() { return name; }
	void show();
};

NamedCircle::NamedCircle(int radius=0, string name="NONAME") : Circle(radius) {
	this->name = name;
}

void NamedCircle::show() {
	cout << "반지름이 " << getRadius() << "인 " << name << endl;
}

string biggest(NamedCircle p[], int n) {
	if(n<=0)
		return ""; // 오류

	int big = 0;
	for(int i=1; i<n; i++) {
		if(p[i].getRadius() > p[big].getRadius())
			big = i;
	}

	return p[big].getName();
}

int main() {
	NamedCircle c[5];
	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	for(int i=0; i<5; i++) {
		int r;
		string name;
		cout << i+1 << ">> ";
		cin >> r;
		getline(cin, name);
		if(r <= 0) {
			cout << "다시 입력하세요" << endl;
			i--;
			continue;
		}

		c[i].set(r, name);
	}
	cout << "가장 면적이 큰 피자는 " << biggest(c, 5) << "입니다" << endl;
}