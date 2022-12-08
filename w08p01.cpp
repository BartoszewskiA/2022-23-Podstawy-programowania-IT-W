#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int tab[255];
fstream plik;
bool walidacja(string s);

    void statystyka();
void wypisz(int a = 0, int b = 255);

int main()
{

    string nazwa;
    do
    {
        cout << "Podaj nazwe pliku (*.txt): ";
        getline(cin, nazwa);

    } while (!walidacja(nazwa));

    plik.open(nazwa, ios::in);
    if (!plik.good())
    {
        cout << "bledna nazwa pliku";
        return 0;
    }
    statystyka();
    wypisz(27, 126);
    plik.close();
    return 0;
}

void statystyka()
{
    string wiersz;
    for (int i = 0; i < 255; i++)
        tab[i] = 0;
    while (!plik.eof())
    {
        getline(plik, wiersz);
        for (int i = 0; i < wiersz.length(); i++)
            tab[(int)wiersz[i]]++;
    }
}

void wypisz(int a, int b)
{
    if (!(a >= 0 && a <= 255 && b >= 0 && b <= 255 && a < b))
    {
        cout << "blad zakresu";
        return;
    }
    cout << endl;
    for (int i = a; i <= b; i++)
        cout << (char)i << "[" << tab[i] << "] ";
    cout << endl;
}

bool walidacja(string s)
{
    if (s.length() == 5) // minimalna dlugośc lacycha *.txt
        return false;
    int poz_kropki = s.find('.');
    if (poz_kropki <= 0)
        return false;
    // sprawdzamy, czy 4 ostatnie znaki to .txt
    if (s.substr(s.length() - 4, 4) != ".txt")
        return false;
    //s przeszedl wszystkie testy
    return true;
}