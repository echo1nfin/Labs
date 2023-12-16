#include <iostream>
#include <math.h>

using namespace std;

double f(double x) {
	return x - 2 + sin(1/x);
}

double f1(double x) {
	return 1 - cos(1/x) / pow(x,2);
}

double f2(double x) {
	return -(sin(1/x) + (2 * cos(1/x)) / pow(x,3)) ;
}

int main() {
	setlocale(LC_ALL, "ru");
	double a, b, c, eps;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "eps = "; cin >> eps;
	if (f(a) * f2(a) > 0) {
		c = a;
	}
	else {
		c = b;
	}
	while (abs(f(c)) > eps) {
		c = c - f(c) / f1(c);
	}
	cout << "Корень уравнения на интервале: " << c << endl;
}
