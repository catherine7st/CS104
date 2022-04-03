#include <iostream>
#include<cmath>
using namespace std;

/// <summary>
/// ������� �� �������� �� ������ �� x^k
/// </summary>
/// <param name="x">x</param>
/// <param name="n">n</param>
/// <returns></returns>
int f(int x, int n)
{
    int sum = 0;
    for (int k = 1; k <= n; k++)
    {
        sum += pow(x, k);
    }
    return sum;
}

/// <summary>
/// ������ ��������
/// </summary>
int main()
{
    // ���������� ����������
    int x, n;

    // ��������� �� ������������ ����������
    cout << "x=";
    cin >> x;
    cout << "n=";
    cin >> n;

    // ��������� ���������
    cout << "Sum x^n = " << f(x, n) << endl;

    return 0;
}