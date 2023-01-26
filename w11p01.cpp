#include <iostream>

using namespace std;

int main()
{
    int x = 101;
    int *p; // wskaznik
    p = &x;
    *p = 200;
    cout << "dana=" << x << " adres=" << *p;
    return 0;
}