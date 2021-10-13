// Lab_5_1.cpp
// Козубенко Андрій
// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз.
// Варіант 10
#include <iostream>
#include <cmath>

double f(const double a, const double b, const double c);

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double s, t;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double y = (f(t, s, 2) + f(1, s + t, t - s)) / 1. * (1 + f(1, 1, t * t + s * s) * f(1, 1, t * t + s * s));

	cout << endl << "y = " << y << endl;

	return 0;
}

double f(const double a, const double b, const double c)
{
	return ((a + b + c) / 1. * (sin(a * b) * sin(a * b) + c * c));
}