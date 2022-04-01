﻿// 4. Лисе и периметър на квадрат, кръг или триъгълник
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Необходими променливи
    int menu;
    float p, s;

    // Меню
    cout << "Select figure:" << endl;
    cout << "1. Square" << endl;
    cout << "2. Circle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Make your choise now: ";
    cin >> menu;

    // Обработка
    switch (menu)
    {
        // Square
        case 1:
        {
            float a;
            cout << "Enter square size: ";
            cin >> a;
            p = 4 * a;
            s = a * a;
            break;
        }
        // Circle
        case 2:
        {
            float r;
            cout << "Enter circle radius: ";
            cin >> r;
            p = 2 * 3.14 * r;
            s = 3.14 * r * r;
            break;
        }
        // Triangle
        case 3:
        {
            float a, b, c;
            cout << "Enter triangle sizes: ";
            cin >> a >> b >> c;
            p = a + b + c;
            float p2 = p / 2;
            s = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
            break;
        }
    }

    // Отпечатване на резултата
    cout << "Area " << p << endl;
    cout << "Surface " << s << endl;

    return 0;
}
