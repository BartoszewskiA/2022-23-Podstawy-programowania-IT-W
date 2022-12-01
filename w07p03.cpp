#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string nazwaPliku, s;
    cout << "Podaj nazwe pliku: ";
    getline(cin, nazwaPliku);
    fstream plik;
    plik.open(nazwaPliku, ios::in);
    if (!plik.good())
    {
        cout << "nieprawidlowa nazwa pliku";
        return 0;
    }
    int i = 1;
    while (!plik.eof())
    {
        getline(plik, s);
        cout << i++ << ": " << s << endl;
    }
    plik.close();
    return 0;
}