// Lab_04_3.cpp
// < Матвіїв Владислав >
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами.
// Варіант 8

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, a, c, F;

	cout << "a = "; cin >> a;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << "---------------------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << "|" << setw(11) << "a"
		<< "|" << setw(15) << "c" << "|" << setw(19) << "F" << endl;
	cout << "---------------------------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (c < 0 && a != 0)
			F = -(a * (x * x));
		else
			if ((c > 0) && (a == 0))
				F = ((a - x) / (c * x));
			else
				F = (x / c);

		cout << "|" << setw(7) << setprecision(2) << x << "|" << setw(11)
			<< setprecision(3) << a << "|" << setw(15) << setprecision(4)
			<< c << "|" << setw(19) << setprecision(5) << F << "|" << endl;
		x += dx;
	}
	cout << "---------------------------------------------------" << endl;

	return 0;
}