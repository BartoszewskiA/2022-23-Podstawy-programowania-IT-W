#include <iostream>

using namespace std;

int srednia(int a, int b);
double srednia(double a, double b);
double srednia(int a, int b, int c);

int main()
{
    cout << srednia(3, 6);
    cout << endl;
    cout << srednia(3.0, 6.0);
    cout << endl;
    cout << srednia(1, 2, 3);
    return 0;
}

int srednia(int a, int b)
{
    return (a + b) / 2;
}

double srednia(double a, double b)
{
    return (a + b) / 2;
}

double srednia(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}