#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Podaj napis: ";
    getline(cin, s);
    // for (int i = 0; i < s.length(); i++)
    //     cout << s[i] << "*";
    for (int i = s.length()-1; i >=0; i--)
        cout << s[i];
    return 0;
}