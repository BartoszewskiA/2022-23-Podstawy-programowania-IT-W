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
    for (int i = 0; i < s.length(); i++)
        if (s[i] == znak)
            cout << i << "-" << s[i] << endl;
    return 0;
}