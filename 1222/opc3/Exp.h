#pragma once
class Exp{
public:
	Exp();
	Exp(int n);
	Exp(int n1, int n2);
	int getValue();
	int getBase();
	int getExp();
	int equals(Exp b);
	~Exp();
private:
	int num1;
	int num2;
	int res;
};