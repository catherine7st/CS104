// 2. NAP2016
#include <iostream> 
using namespace std;
int main()
{
	// vars
	float income, tax;
	// ��������� ������:
	cout << "Please enter income for 2016: ";
	cin >> income;
	// ������� ������:
	if (income <= 1620)
	{
		// ���������� �����
		tax = 0;
	}
	if (income > 1620 && income <= 3000)
	{
		// 18 % �� ������ ��� 1620
		tax = (income - 1620) * 0.18;
	}
	if (income > 3000 && income <= 7200)
	{
		// 168 ��. + 20% �� ������ ��� 3000
		tax = 168 + (income - 3000) * 0.2;
	}
	if (income > 7200)
	{
		// 1072 ��. + 22% �� ������ ��� 7200
		tax = 1072 + (income - 7200) * 0.22;
	}

	// ��������� �� ��������:
	cout << "Tax = " << tax << endl;
	return 0;
}