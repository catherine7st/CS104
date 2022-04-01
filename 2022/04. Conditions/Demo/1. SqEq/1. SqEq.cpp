﻿#include <iostream> // cout, cin
#include <cmath> // sqrt, pow
using namespace std;
int main()
{
	// Необходими промеливи
	float a, b, c;

	// Въвеждане на коефициентите на уравнението
	cout << "a,b,c=?" << endl;
	cin >> a >> b >> c;

	// Хамалски сметки на уравнението
	float d = pow(b, 2) - 4 * a * c;

	// d < 0
	if (d < 0)
	{
		cout << "d < 0" << endl;
		cout << "Not Real Solution" << endl;
	}

	// d = 0
	if (d == 0) 
	{
		cout << "d = 0" << endl;
		cout << "x1=x2" << endl;
		cout << "x=" << (-b) / (2 * a) << endl;
	}

	// d > 0
	if (d > 0)
	{
		float x1 = ((-b) + sqrt(d)) / (2 * a);
		float x2 = ((-b) - sqrt(d)) / (2 * a);
		cout << "d=" << d << endl;
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2 << endl;
	}

	return 0;
}
