#include <iostream>
using namespace std;

int main() {
    string coffee;
    int price = 0, num;
    int totalIncome = 0;

    while (totalIncome < 20000) {
        cout << "Ŀ�� ������ �������ּ���: ";
        cin >> coffee >> num;

        if (coffee == "����������") price = 2000 * num;
        else if (coffee == "�Ƹ޸�ī��") price = 2300 * num;
        else if (coffee == "īǪġ��") price = 2500 * num;
        else {
            cout << "�߸��� Ŀ�� �����Դϴ�. �ٽ� �Է����ּ���." << endl;
            continue;
        }
        totalIncome += price;
        cout << coffee << "�� �ֹ��ϼ̽��ϴ�." << endl;
        cout << "������ " << price << "�� �Դϴ�. ���ְ� �弼��. " << endl;
    }
    cout << "���� " << totalIncome << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~\n";
    return 0;
}