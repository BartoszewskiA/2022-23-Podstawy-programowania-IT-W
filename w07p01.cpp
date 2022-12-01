#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string s;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "blad pliku";
        return 0;
    }
    while (!plik.eof()) // plik.eof()!=true
    {
        getline(plik, s);
        cout << s << endl;
    }
    plik.close();
    return 0;
}