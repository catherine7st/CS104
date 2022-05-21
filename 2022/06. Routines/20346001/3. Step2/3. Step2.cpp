// 3. Step2
#include <iostream>
using namespace std;

// ���������� ������� �� �������� �� ������ �� ��������
// n=������� ������
// returns = ��������
int step2(int n)
{
    if (n <= 1) return 2; // exit 
    else return 2 * step2(n - 1);
}

int main()
{
    // ������� 10 ������� �� ������� 2
    for (int k = 1; k <= 10; k++)
    {
        cout << "2^" << k << "=" << step2(k) << endl;
    }
    return 0;
}