//Оценка по пятибалльной шкале. Вывести «отлично» для числа 5, «хорошо» для 4, «средне» для 3 и «низко» для значений от 1 до 2 включительно
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