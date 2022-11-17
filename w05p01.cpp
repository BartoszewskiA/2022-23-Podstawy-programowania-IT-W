#include <iostream>

using namespace std;

void funkcja_1();
int dodaj(int x, int y);
void zamien(int x, int y);
void zamien_v2(int &x, int &y);

int main()
{
    // funkcja_1();
    int x, y;
    cout << "a=";
    cin >> x;
    cout << "b=";
    cin >> y;
    zamien_v2(x, y);
    cout << "Na zewnatrz funkcji: x=" << x << " y=" << y << endl;
    return 0;
}

void funkcja_1()
{
    cout << "To ja funkcja_1";
    return; // opcjonalnie
}

int dodaj(int x, int y)
{
    return x + y;
}

void zamien(int x, int y) // ta funkcaj nic nie robi
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "wewnatrz funkcji: x=" << x << " y=" << y << endl;
}

void zamien_v2(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "wewnatrz funkcji: x=" << x << " y=" << y << endl;
}