#include <iostream>
using namespace std;

int f(int a, int b)
{
	return a + b;
}

int main()
{
	int a, b;

	cout << "Numbers: ";
	cin >> a>> b;

	int result = f(a, b);

	cout << "Result: " << result;

	return 0;
}