#include <iostream>
#include <string>
using namespace std;

class Phone { // 전화 번호를 표현하는 클래스
	string name; 
	string telnum;
	string address; 
public:	
	Phone(string name="", string telnum="", string address="") {
		this->name = name;
		this->telnum = telnum;
		this->address = address;
	}
	friend ostream& operator << (ostream& outs, Phone phone); // << 연산자를 프렌드로 선언
	friend istream& operator >> (istream& ins, Phone& phone); // >> 연산자를 프렌드로 선언
};

ostream& operator << (ostream& outs, Phone phone) { // 스트림에 phone 객체 출력
	outs << "(" << phone.name << ",";
	outs <<	phone.telnum << ",";
	outs <<	phone.address << ")";
	return outs;
} 

istream& operator >> (istream& ins, Phone& phone) { // 스트림으로부터 읽어 phone 객체 완성
	cout << "이름:";
	getline(ins, phone.name);
	cout << "전화번호:";
	getline(ins, phone.telnum);
	cout << "주소:";
	getline(ins, phone.address);
	return ins;
}

int main() {
	Phone girl, boy;
	cin >> girl >> boy; //전화 번호를 키보드로부터 읽는다.
	cout << girl << endl << boy << endl; // 전화 번호를 출력한다.
}