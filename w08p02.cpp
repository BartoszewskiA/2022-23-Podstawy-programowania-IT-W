#include <iostream>
#include <string>

using namespace std;

string normalizuj(string s);

int main()
{
    string nazwa;
    cout << "Podaj nazwe miejscowosci: ";
    getline(cin, nazwa);
    nazwa = normalizuj(nazwa);
    cout << "[" << nazwa << "]";
    return 0;
}

string normalizuj(string s)
{
    // if(s[0]==' ')
    //     s=s.erase(0,1);
    while (s[0] == ' ')
    {
        s = s.erase(0, 1);
    }
    while (s[s.length() - 1] == ' ' || s[s.length() - 1] == ',' || s[s.length() - 1] == '.')
    {
        s = s.erase(s.length() - 1, 1);
    }

    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    s[0] = toupper(s[0]);

    int nr_myslinika = s.find('-');
    if (nr_myslinika > 0)
        s[nr_myslinika] = ' ';

    int nr_spacji = s.find(' ');
    if (nr_spacji > 0)
        s[nr_spacji + 1] = toupper(s[nr_spacji + 1]);
    return s;
}