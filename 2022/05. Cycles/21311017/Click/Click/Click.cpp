#include <iostream>
using namespace std;
int main()
{
    for (int k = 1; k <= 100; k++)
    {
        if (k % 7 == 0 || // 1. ���� �� ���� �� 7
            k % 10 == 7 || // 2. ���� ������ �� ��������� � 7
            (k / 10) % 10 == 7) // 3. ���� ������� �� ���������� � 7
        {
            cout << "Click ";
        }
        else
        {
            cout << k << " ";
        }
    }
    return 0;
}