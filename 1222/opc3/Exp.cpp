#include "Exp.h"

Exp::Exp(){
	num1 = 1, num2 = 1, res = 1;
}
Exp::Exp(int n){
	num1 = n, num2 = 1, res = 1;
}
Exp::Exp(int n1, int n2){
	num1 = n1, num2 = n2, res = 1;
}
Exp::~Exp()
{
}

int Exp::getValue(){
	for (int i = 0; i < num2; i++) {
		res *= num1;
	}
	return res;
}
int Exp::getBase(){
	return num1;
}
int Exp::getExp(){
	return num2;
}
int Exp::equals(Exp b){
	if (res == b.res) return 1;	//Âü
	else return 0;				//°ÅÁþ
}
