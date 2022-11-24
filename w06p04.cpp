#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Podaj napis: ";
    getline(cin, s);
    char znak;
    cout<<"Jakiego znaku szukasz: ";
    znak = getchar();
    int poz = s.find(znak);
    cout << poz;
    return 0;
}