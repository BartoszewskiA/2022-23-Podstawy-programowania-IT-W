#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string n_z, n_d, s;
    cout << "Podaj nazwe pliku zrodlowego: ";
    getline(cin, n_z);
    cout << "Podaj nazwe pliku docelowego: ";
    getline(cin, n_d);
    fstream plik_z, plik_d;
    plik_z.open(n_z, ios::in);
    plik_d.open(n_d, ios::out);
    if (!plik_z.good() || !plik_d.good())
    {
        cout << "blad pliku";
        return 0;
    }
    while (!plik_z.eof())
    {
        getline(plik_z, s);
        plik_d << s<<endl;
    }

    plik_z.close();
    plik_d.close();

    return 0;
}