﻿// Редицата на Фибоначи до зададено число  :Горна граница

#include <iostream>
using namespace std;
int main()
{
    // Променливи
    int n, a = 0, b = 1, c = a + b;

    // Въвеждане на число за горна граница
    cout << "Upper limit: ";
    cin >> n ;   

   // Отпечатване на първите 3 числа;
    cout << a << " " << b << " " << c << " ";


  // Изчисления 
    while (c < n) 
    {
        // Метод на плаващия прозорец
        a = b;
        b = c;
        c = a + b;

        // Отпечатване на екрана
        if (c < n)
        {
            cout << c << " ";
        }
    }

    return 0;
}