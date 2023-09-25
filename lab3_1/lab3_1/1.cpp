//Dano tseloye chislo, opredelit' yavlyayetsya li chislo polozitel'nym i dvuhznachnym.
#include <iostream>
#include <clocale>

using namespace std;

int main() {
	int chislo;
	cout << "Vvedite chislo: ";
	cin >> chislo;
	if (chislo > 9 and chislo < 100) {
		cout << "Chislo polozitelnoe i dvuhznacnoe" << endl;
	}
	else {
		cout << "Chislo ne polozitelnoe i dvuhznacnoe";
	}
}