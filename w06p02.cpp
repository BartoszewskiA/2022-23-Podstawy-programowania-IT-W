#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Podaj napis: ";
    getline(cin, s);
    int ile = s.length();
    cout << "wpisales " << ile << " znakow";
    return 0;
}