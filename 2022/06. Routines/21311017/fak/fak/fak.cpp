#include <iostream>
using namespace std;

/// <summary>
/// ���������� ������� �� �������� �� ���������
/// </summary>
/// <param name="n">������ ���������</param>
/// <returns>��������</returns>
int fak(int n)
{
    if (n <= 1) return 1; // exit 
    else return n * fak(n - 1);
}

/// <summary>
/// ������ ������� �� ����������
/// </summary>
int main()
{
    cout << "5!=" << fak(5) << endl;
    return 0;
}