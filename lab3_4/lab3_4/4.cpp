//������ �� ������������ �����. ������� �������� ��� ����� 5, ������� ��� 4, ������� ��� 3 � ������ ��� �������� �� 1 �� 2 ������������
#include <iostream>
#include <clocale>

using namespace std;

int main() {
	int ocenka;
	cout << "Ocenka ";
	cin >> ocenka;
	switch (ocenka) {
	case 3: cout << "Sredne"; break;
	case 4: cout << "Horosho"; break;
	case 5: cout << "Otlichno"; break;
	default: cout << "Nizko"; break;
	}
}