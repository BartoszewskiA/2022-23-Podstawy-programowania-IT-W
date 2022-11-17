#include <iostream>

using namespace std;

void wypisz();
bool zamien(int nr, int wartosc);

int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int n = 10;

int main()
{
    wypisz();
    if (zamien(6, 100))
        wypisz();
    else
        cout << "nie udalo sie";
    return 0;
}

bool zamien(int nr, int wartosc)
{
    if (nr >= 0 && nr < n)
    {
        tab[nr] = wartosc;
        return true;
    }
    else
        return false;
}

void wypisz()
{
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
    cout << endl;
}
