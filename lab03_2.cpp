// Lab_03_2.cpp
// < Лазарук Олег >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 17

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x, a, b, c ,F;

    cout << "a ="; cin >> a;
    cout << "b ="; cin >> b;
    cout << "c ="; cin >> c;
    cout << "x ="; cin >> x;

    // 1 спосіб
    if (x + 10 < 0 && b != 0 )
       F = a*pow(x, 2) - c*x + b;
    if (x + 10 > 0 && b == 0)
       F = (x - a)/(x - c);
    if (!(x + 10 < 0 && b != 0) && !(x + 10 > 0 && b == 0))
       F = -x/(a-c);
    cout << "1) F = " << F << endl;


    //2 спосіб
    if (x + 10 < 0 && b != 0 )
       F = a*pow(x, 2) - c*x + b;
    else 
        if (x+10 > 0 && b == 0)
            F = (x - a)/(x - c);
        else 
            F = -x/(a-c);
    cout << "2) F = " << F << endl;
    
    cin.get();
    return 0;
}