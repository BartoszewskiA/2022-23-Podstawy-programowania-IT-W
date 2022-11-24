#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis;
    cout << "Przedstaw sie: ";
    // cin >> napis;
    getline(cin, napis);
    string powitanie = "";
    // powitanie = powitanie + "Witaj ";
    // powitanie = powitanie + napis;
    // powitanie = powitanie + "!";
    powitanie += "Witaj ";
    powitanie += napis;
    powitanie += "!";
    cout << powitanie;
    return 0;
}