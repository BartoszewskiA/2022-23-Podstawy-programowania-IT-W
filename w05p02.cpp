#include <iostream>

using namespace std;

void wypisz(int t[], int n);
bool zamien(int t[], int dlugosc, int nr, int wartosc);

int main()
{
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    wypisz(tab, n);
    if (zamien(tab, n, 6, 100))
        wypisz(tab, n);
    else
        cout << "nie udalo sie";
    return 0;
}

bool zamien(int t[], int dlugosc, int nr, int wartosc)
{
    if (nr >= 0 && nr < dlugosc)
    {
        t[nr] = wartosc;
        return true;
    }
    else
        return false;
}

void wypisz(int t[], int n)
{
    for (int i = 0; i < n; i++)
        cout << t[i] << " ";
    cout << endl;
}
