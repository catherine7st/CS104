#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter five digit number: ";
    cin >> a;
    int a1 = (a / 10000) % 10;
    int a3 = (a / 100) % 10;
    int a5 = (a / 1) % 10;
    int sum = a1 + a3 + a5;
    cout << "Sum: " << sum << endl;
    return 0;
}
