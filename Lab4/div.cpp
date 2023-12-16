#include <iostream>
#include <math.h>

using namespace std;

double f(double x) {
	return x - 2 + sin(1/x);
}

int main() {
	setlocale(LC_ALL, "ru");
	const double eps = 1e-6;
	double a, b, c;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	while (abs(b - a) > eps) {
		c = (a + b) / 2;
		if (f(b) * f(c) < 0) {
			a = c;
		}
		else {
			b = c;
		}
	}
	cout << " орень уравнени€ на заданном отрезке: " << c << endl;
}