//Dano 3 zelih chisla. Nayti kolichestvo otrizatelnih i kolichestvo chetnih chisel.
#include <iostream>
#include <clocale>

using namespace std;

int main() {
	int a, b, c, otriz = 0, chetn = 0;
	cout << "Vvedite 3 chisla: ";
	cin >> a >> b >> c;
	if (a < 0) otriz++;
	if (b < 0) otriz++;
	if (c < 0) otriz++;
	if (a % 2 == 0) chetn++;
	if (b % 2 == 0) chetn++;
	if (c % 2 == 0) chetn++;
	cout << "Otrizatelnih " << otriz << "\nChetnih " << chetn;
}