#include <iostream>
using namespace std;
int main()
{
    // ����������� �� ������� 3x3
    int A[3][3], B[3][3], C[3][3];

    // ��������� �� �������� � ������� A
    cout << "A:\n";
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> A[x][y];
        }
    }

    // ��������� �� �������� � ������� B
    cout << "B:\n";
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> B[x][y];
        }
    }

    // ���������� �� C = A + B
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            C[x][y] = A[x][y] * B[x][y]; // Adamar Product
        }
    }

    // ����������� �� ���������� �� ������� C
    cout << "A+B=\n";
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << C[x][y] << '\t'; // tab
        }
        cout << '\n'; // new line
    }

    return 0;
}