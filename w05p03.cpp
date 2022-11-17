#include <iostream>

using namespace std;

void wypisz(int x, int y, int z=0);

int main()
{
    wypisz(1,2);
    return 0;
}

void wypisz(int x, int y, int z)
{
    cout << "x=" << x << " y=" << y << " z=" << z;
}