#include <iostream>
#include <math.h>

using namespace std;

double g(double x) {
	return 2 - sin(1/x);
}

double iterativeMethod(double x0, int maxIterations, double eps) {
	double currentX = x0;

	for (int i = 0; i < maxIterations; ++i) {
		double nextX = g(currentX);

		if (fabs(nextX - currentX) < eps){
			return nextX;
		}

		currentX =  nextX;
	}
	return currentX;
}

int main() {
	setlocale(LC_ALL, "ru");
	double a;
	double b;
	cout << "Введите границы отрезка" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	int maxIterations = 10000;
	double eps = 1e-8;
	double x0 = (a + b) / 2.0;
	double x = iterativeMethod(x0, maxIterations, eps);

	cout << "Корнь уравнения на отрезке = " << x << endl;
}
