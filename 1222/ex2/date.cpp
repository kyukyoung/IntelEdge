#include <iostream>
#include <string> 
#include "date.h"
using namespace std;

Date::Date(){
}
Date::Date(int y, int m, int d){
	year = y, month = m, day = d;
}
Date::Date(string date){
	year = stoi(date.substr(0,4));
	month = stoi(date.substr(5,2)); //���� ���ڸ� ���ڷ� ������ �ε��� �����ؾ���
	day = stoi(date.substr(7,2));
}
Date::~Date(){
}

void Date::show(){
	cout << year << "�� " << month << "�� " << day << "��" << endl;
}
int Date::getYear(){
	return year;
}
int Date::getMonth(){
	return month;
}
int Date::getDay(){
	return day;
}
