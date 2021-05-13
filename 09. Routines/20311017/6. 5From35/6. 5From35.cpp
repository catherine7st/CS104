#include <iostream>
using namespace std;

/// <summary>
/// ���������� ������� �� �������� �� ���������
/// </summary>
/// <param name="n">������ ���������</param>
/// <returns>��������</returns>
double fak(int n)
{
    if (n <= 1) return 1; // exit 
    else return n * fak(n - 1);
}

/// <summary>
/// ������ ������� �� ����������
/// </summary>
int main()
{
    double C_5_35 = fak(35) / (fak(5) * fak(35 - 5));
    cout << C_5_35 << endl;
    return 0;
}