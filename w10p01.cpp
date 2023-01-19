#include <iostream>

using namespace std;
    struct osoba
    {
        string imie;
        string nazwisko;
        int wiek;
    };

int main()
{
    osoba ktos1;
    ktos1.imie = "Jan";
    ktos1.nazwisko = "Kowalski";
    ktos1.wiek = 30;

    cout << "nazwisko: " << ktos1.nazwisko << endl
         << "imie: " << ktos1.imie << endl
         << "wiek: " << ktos1.wiek << endl;
    return 0;
}
void funkcja()
{
    osoba k2;
}