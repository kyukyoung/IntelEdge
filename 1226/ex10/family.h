#pragma once
//#ifndef FAMILY_H_
//#define FAMILY_H_
#include <iostream>
#include <cstring>
using namespace std;

class Person {
public:
	Person(){}
	//Person(string name) { this->name = name; }
	~Person(){}
	void inputName(string name) { this->name = name; }
	string printName() { return name; }
private:
	string name;
};

class Family {
public:
	Family(string name, int size){ //size 개수 만큼 Person 배열 동적생성
		this->name = name;
		this->size = size;
		p = new Person[size];
	}
	~Family() { delete[]p; }
	void setName(int n, string name) { //Person 객체 배열 입력
		p[n].inputName(name);
	}
	void show() { //모든 가족 구성원 출력
		cout << this->name << "가족은 다음과 같이 " << this->size << "명 입니다." << endl;
		for (int i = 0; i < this->size; i++) {
			cout << p[i].printName() << "\t";
		}
	}
private:
	Person* p;		//Person 배열 포인터
	string name;	
	int size;		//Person 배열 크기. 가족 구성원 수
};
//#endif // !family.h
