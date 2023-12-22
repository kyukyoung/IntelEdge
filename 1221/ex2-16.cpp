#include <iostream>
using namespace std;

int main() {
    string coffee;
    int price = 0, num;
    int totalIncome = 0;

    while (totalIncome < 20000) {
        cout << "커피 종류를 선택해주세요: ";
        cin >> coffee >> num;

        if (coffee == "에스프레소") price = 2000 * num;
        else if (coffee == "아메리카노") price = 2300 * num;
        else if (coffee == "카푸치노") price = 2500 * num;
        else {
            cout << "잘못된 커피 종류입니다. 다시 입력해주세요." << endl;
            continue;
        }
        totalIncome += price;
        cout << coffee << "를 주문하셨습니다." << endl;
        cout << "가격은 " << price << "원 입니다. 맛있게 드세요. " << endl;
    }
    cout << "오늘 " << totalIncome << "원을 판매하여 카페를 닫습니다. 내일 봐요~\n";
    return 0;
}