#include "Tower.h"

Tower::Tower(){
	height = 1;
}
Tower::Tower(int n){
	height = n;
}
Tower::~Tower(){
}

int Tower::getHeight(){
	return height;
}

