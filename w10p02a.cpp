#include <iostream>
#include <string>

using namespace std;
struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
} tab[3];

void wczytaj();
void wypisz();

int main()
{
    return 0;
}

void wczytaj()
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

void wypisz()
{

    for (int i = 0; i < 3; i++)
    {
        cout << "nazwisko: " << tab[i].nazwisko << endl
             << "imie: " << tab[i].imie << endl
             << "wiek: " << tab[i].wiek << endl;
    }
}
