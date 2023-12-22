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
	month = stoi(date.substr(5,2)); //월이 두자리 숫자로 들어오면 인덱스 변경해야함
	day = stoi(date.substr(7,2));
}
Date::~Date(){
}

void Date::show(){
	cout << year << "년 " << month << "월 " << day << "일" << endl;
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
