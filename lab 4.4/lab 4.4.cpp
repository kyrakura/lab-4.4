// Lab_04_4.cpp
// < Цай Девід >
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 23
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double R, xp, xk, dx;
    double pi = 3.14159265358979323846;

    cout << " R =  ";
    cin >> R;
    cout << " xp = ";
    cin >> xp;
    cout << " xk = ";
    cin >> xk;
    cout << " dx = ";
    cin >> dx;

    for (double x = xp; x <= xk; x += dx) {
        double y;
        if (x <= -7 - R)
            y = R;
        else if (-7 - R < x && x <= -7 + R) 
            y = -sqrt(R * R - (x + 7) * (x + 7) + R);
        else if (-7 + R < x && x <= -4) 
            y = -R;
        else if (-4 < x && x <= 0) 
            y = -(x - R) / 4;
        else if (0 < x && x <= pi)
            y = sin(x);
        else 
            y = tan(45 * pi / 180) * x - pi;
        cout << "x: " << x << ", y: " << y << std::endl;
    }

    return 0;
}
