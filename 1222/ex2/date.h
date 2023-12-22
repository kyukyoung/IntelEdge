#pragma once
class Date{
public:
	Date();
	Date(int y, int m, int d);
	Date(std::string date);
	~Date();
	void show();
	int getYear();
	int getMonth();
	int getDay();
private:
	int year;
	int month;
	int day;
};