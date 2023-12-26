#pragma once
#ifndef family.h
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
	Family(string name, int size){ //size ���� ��ŭ Person �迭 ��������
		this->name = name;
		this->size = size;
		p = new Person[size];
	}
	~Family() { delete[]p; }
	void setName(int n, string name) { //Person ��ü �迭 �Է�
		p[n].inputName(name);
	}
	void show() { //��� ���� ������ ���
		cout << this->name << "������ ������ ���� " << this->size << "�� �Դϴ�." << endl;
		for (int i = 0; i < this->size; i++) {
			cout << p[i].printName() << "\t";
		}
	}
private:
	Person* p;		//Person �迭 ������
	string name;	
	int size;		//Person �迭 ũ��. ���� ������ ��
};
#endif // !family.h
