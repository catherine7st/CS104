#include <iostream>
using namespace std;

/// <summary>
/// ������� �� �������� �� ��� �����
/// </summary>
/// <param name="a">����� �����</param>
/// <param name="b">����� �����</param>
/// <returns>���� �� �������</returns>
int sum(int a = 2, int b = 3)
{
    return (a + b);
}

/// <summary>
/// ������ ������� �� ����������
/// </summary>
int main()
{
    // �������� �������� �� ��������� �� �������� �� ��� �����
    cout << sum() << endl;    // 5
    cout << sum(1) << endl;   // 4
    cout << sum(1, 2) << endl; // 3
    return 0;
}