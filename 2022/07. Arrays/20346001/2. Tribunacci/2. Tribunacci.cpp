// 2. Tribunacci
#include <iostream>
using namespace std;
int main()
{
    // ���� ��������
    const int N = 10;

    // M����
    int F[N] = { 1,1,1 };

    // P������� �� ���������
    for (int k = 3; k < N; k++)
    {
        F[k] = F[k - 3] + F[k - 2] + F[k - 1];
    }

    for (int k = 0; k < N; k++)
    {
        cout << F[k] << " ";
    }
    return 0;
}