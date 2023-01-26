#include <iostream>

using namespace std;

void zwieksz_o_10(int *p);

int main()
{
    int x=100;
    int *wskaznik = &x;
    zwieksz_o_10(wskaznik);
    cout << "x=" << x;
    return 0;
}

void zwieksz_o_10(int *p)
{
    *p += 10;
}