#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Podaj napis: ";
    getline(cin, s);
    char znak;
    cout << "Jakiego znaku szukasz: ";
    znak = getchar();
    int poz = s.find(znak);
    if (poz >= 0)
    {
        do
        {
            cout << poz << "=" << s[poz] << endl;
            poz = s.find(znak, poz + 1);
        } while (poz < s.length());
    }
    return 0;
}