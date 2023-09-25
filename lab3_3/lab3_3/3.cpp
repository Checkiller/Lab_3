//Dana funkciya. Nayti y pri proizvolnom x.
#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main() {
	const double A = 1.4;
	const double B = 4.1;
	const double E = 2.71828;
	double x;
	double y;
	cout << "Vvedite x: ";
	cin >> x;
	if (x < -2) {
		y = A + (1 / (2 * E));
	}
	else if (x > 5) {
		y = pow(pow(x, 4) + (2 * A), 0.5);
	}
	else {
		y = sin(pow(B, 2) * x);
	}
	cout << "y = " << y;
}