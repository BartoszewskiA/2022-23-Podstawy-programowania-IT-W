#include <iostream>
#include <string>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
};

void wczytaj(osoba tab[]);
void wypisz(osoba tab[]);

int main()
{
    osoba tab_osoby[3];
    wczytaj(tab_osoby);
    wypisz(tab_osoby);
    return 0;
}

void wczytaj(osoba tab[])
{
    string temp;
    for (int i = 0; i < 3; i++)
    {
        cout << "imie: ";
        getline(cin, tab[i].imie);
        cout << "Nazwisko: ";
        getline(cin, tab[i].nazwisko);
        cout << "Wiek: ";
        getline(cin, temp);
        tab[i].wiek = atoi(temp.c_str());
    }
}

void wypisz(osoba tab[])
{

    for (int i = 0; i < 3; i++)
    {
        cout << "nazwisko: " << tab[i].nazwisko << endl
             << "imie: " << tab[i].imie << endl
             << "wiek: " << tab[i].wiek << endl;
    }
}
